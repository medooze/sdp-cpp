#ifndef _SDP_MEDIA_DESCRIPTION_H_
#define _SDP_MEDIA_DESCRIPTION_H_

#include <string.h>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include <algorithm>

#include "Information.h"
#include "Bandwidth.h"
#include "Attribute.h"
#include "BaseAttribute.h"
#include "CandidateAttribute.h"
#include "FormatAttribute.h"
#include "RTPMapAttribute.h"
#include "Key.h"

#if defined(_WIN32) || defined(_WIN64) 
#define strcasecmp _stricmp 
#endif

namespace sdp
{

class MediaDescription
{
public:
	using shared = std::shared_ptr<MediaDescription>;
public:
	MediaDescription() = default;

	MediaDescription(const std::string& media, int port, const std::string& proto)
	{
		//Set
		this->media = media;
		this->port = port;
		
		//tokenize proto
		setProtoString(proto);
	}

	std::shared_ptr<MediaDescription> clone()
	{
		//Serialize protocol
		std::string value = "";
		bool first = true;
		for (std::string p : proto)
		{
			if (!first)
				value += "/";
			else
				first = false;
			value += p;
		}
		//Create new media
		auto cloned = std::make_shared<MediaDescription>(media, port, value);
		//For each format
		for (std::string format : formats)
			//Add it
			cloned->addFormat(format);
		//For each connection
		for (auto connection : connections)
			//Add it
			cloned->addConnection(connection->clone());
		//For each bandwidth
		for (auto bandwidth : bandwidths)
			//Add it
			cloned->addBandwidth(bandwidth->clone());
		//For each connection
		for (auto attribute : attributes)
			//Add it
			cloned->addAttribute(attribute->clone());

		//Return cloned one
		return cloned;
	}

	std::string toString()
	{
		//Create media line
		std::string value = "m=" + media + " " + std::to_string(port);
		if (numberOfPorts>0)
			value += "/" + std::to_string(numberOfPorts);
		value += " ";
		bool first = true;
		for (std::string p : proto)
		{
			if (!first)
				value += "/";
			else
				first = false;
			value += p;
		}
		for (std::string f : formats)
			value += " " + f;
		value += "\r\n";
		//Rest of lines of media
		if (information)
			value += information->toString();
		for (auto c : connections)
			value += c->toString();
		for (auto b : bandwidths)
			value += b->toString();
		if (key)
			value += key->toString();
		for (auto a : attributes)
			value += a->toString();
		return value;
	}
	
	std::vector<std::shared_ptr<Attribute>> getAttributes()
	{
		return attributes;
	}

	std::vector<std::shared_ptr<Bandwidth>> getBandwidths()
	{
		return bandwidths;
	}

	std::vector<std::shared_ptr<Connection>> getConnections()
	{
		return connections;
	}

	std::vector<std::string> getFormats()
	{
		return formats;
	}

	std::string getFormatString()
	{
		std::string value = "";
		for (std::string f : formats)
		{
			if (value.empty())
				value += f;
			else
				value += " " + f;
		}
		return value;
	}

	std::shared_ptr<Information> getInformation()
	{
		return information;
	}

	std::shared_ptr<Key> getKey()
	{
		return key;
	}

	std::string getMedia()
	{
		return media;
	}

	int getPort()
	{
		return port;
	}

	std::vector<std::string> getProto()
	{
		return proto;
	}

	void addFormat(const std::string& fmt)
	{
		formats.push_back(fmt);
	}

	void addFormat(int fmt)
	{
		formats.push_back(std::to_string(fmt));
	}

	void setFormats(const std::vector<std::string>& formats)
	{
		//Clear
		this->formats.clear();
		//Add all formats
		this->formats.insert(this->formats.begin(),formats.begin(),formats.end());
	}

	void addAttribute(const std::shared_ptr<Attribute>& attr)
	{
		attributes.push_back(attr);
	}

	void addBandwidth(const std::shared_ptr<Bandwidth>& bandwidth)
	{
		bandwidths.push_back(bandwidth);
	}

	void addConnection(const std::shared_ptr<Connection>& connection)
	{
		connections.push_back(connection);
	}

	void setInformation(const std::shared_ptr<Information>& information)
	{
		this->information = information;
	}

	void setKey(const std::shared_ptr<Key>& key)
	{
		this->key = key;
	}

	void setMedia(const std::string& media)
	{
		this->media = media;
	}

	void setPort(int port)
	{
		this->port = port;
	}

	void setProtoString(const std::string& proto)
	{
		size_t ini = 0;
		size_t end = 0;
		
		//Tokenize
		while(end!=std::string::npos)
		{
			//find next
			end = proto.find("/", ini);
			
			//Get length
			size_t len = end!=std::string::npos ? end - ini : proto.length() - ini;
			
			//Add proto
			this->proto.push_back(proto.substr(ini, len));
			
			//Move
			ini = end!=std::string::npos ? ++end : end;
		}
	}

	std::string getProtoString()
	{
		std::string value;
		for (std::string p : proto)
		{
			if (value.empty())
				value = p;
			else
				value += "/" + p;
		}
		return value;
	}

	std::shared_ptr<FormatAttribute> getFormat(int fmt)
	{
		//For each attribute
		for (auto attr : attributes)
		{
			//Try to convert it
			auto fmtp = std::dynamic_pointer_cast<FormatAttribute>(attr);
			//Check if it is a format attribute and is the ftmp type
			if (fmtp && fmtp->getFmt() == fmt)
				//return format paraeters
				return fmtp;
		}
		//NOt found
		return std::shared_ptr<FormatAttribute>();
	}

	std::map<std::string, std::string> getFormatParameters(int fmt)
	{
		//For each attribute
		for (auto attr : attributes)
		{
			//Try to convert it
			auto fmtp = std::dynamic_pointer_cast<FormatAttribute>(attr);
			//Check if it is a format attribute and is the ftmp type
			if (fmtp && fmtp->getFmt()==fmt)
				//return format paraeters
				return fmtp->getParameters();
		}
		//Return empty map
		return std::map<std::string, std::string>();
	}

	std::shared_ptr<RTPMapAttribute> getRTPMap(int fmt)
	{
		//For each attribute
		for (auto attr : attributes)
		{
			//Try to convert it
			auto rtmp = std::dynamic_pointer_cast<RTPMapAttribute>(attr);
			//Check if if is the ftmp type
			if (rtmp && rtmp->getFormat()==fmt)
				//return format parameters
				return rtmp;
		}
		//NOt found
		return std::shared_ptr<RTPMapAttribute>();
	}

	template<typename T = Attribute>
	std::shared_ptr<T> getAttribute(const std::string& key)
	{
		//For each attribute
		for (auto attr : attributes)
			//Check if the one searhced
			if (strcasecmp(attr->getField().c_str(),key.c_str())==0)
				//Try to convert it
				return std::dynamic_pointer_cast<T>(attr);
		//Not found
		return std::shared_ptr<T>();
	}
	
	template<typename T = Attribute>
	std::shared_ptr<T> getAttribute()
	{
		//For each attribute
		for (auto attr : attributes)
		{
			//Try to convert it
			auto t = std::dynamic_pointer_cast<T>(attr);
			//If it is from this type
			if (t)
				//Found
				return t;
		}
		//Not found
		return std::shared_ptr<T>();
	}

	template<typename T = Attribute>
	std::vector<std::shared_ptr<T>> getAttributes()
	{
		//Create list
		auto attrs = std::vector<std::shared_ptr<T>>();
		//For each attribute
		for (auto attr : attributes)
		{
			//Try to convert it
			auto t = std::dynamic_pointer_cast<T>(attr);
			//If it was that type
			if (t)
				//Add it
				attrs.push_back(t);
		}
		//Done
		return attrs;
	}

	template<typename T = Attribute>
	std::vector<std::shared_ptr<T>> getAttributes(const std::string& key)
	{
		//Create list
		auto attrs = std::vector<std::shared_ptr<T>>();
		//For each attribute
		for (auto attr : attributes)
			//Check if the one searhced
			if (strcasecmp(attr->getField().c_str(),key.c_str())==0)
			{
				//Try to convert it
				auto t = std::dynamic_pointer_cast<T>(attr);
				//If it was that type
				if (t)
					//Add it
					attrs.push_back(t);
			}
		//Done
		return attrs;
	}

	void addBandwidth(const std::string& type, int bandwidth)
	{
		addBandwidth(std::make_shared<Bandwidth>(type, bandwidth));
	}

	void addBandwidth(const std::string& type, const std::string& bandwidth)
	{
		addBandwidth(std::make_shared<Bandwidth>(type, bandwidth));
	}

	template<typename Type, class ...Args>
	void addAttribute(Args... args)
	{
		//Add attribute
		addAttribute(std::make_shared<Type>(Type{ std::forward<Args>(args)... }));
	}

	void addAttribute(const std::string& field)
	{
		//Add attribute
		addAttribute(std::make_shared<BaseAttribute>(field));
	}

	void addAttribute(const std::string& field, const std::string& value)
	{
		//Add attribute
		addAttribute(std::make_shared<BaseAttribute>(field, value));
	}

	void addAttribute(const std::string& field, int value)
	{
		//Add attribute
		addAttribute(std::make_shared<BaseAttribute>(field, value));
	}

	void addRTPMapAttribute(int format, const std::string& name, int rate)
	{
		addAttribute(std::make_shared<RTPMapAttribute>(format, name, rate));
	}

	void addRTPMapAttribute(int format, const std::string& name, int rate, const std::string& parameters)
	{
		addAttribute(std::make_shared<RTPMapAttribute>(format, name, rate, parameters));
	}

	void addFormatAttribute(int format, const std::string& parameters)
	{
		addAttribute(std::make_shared<FormatAttribute>(format, parameters));
	}

	void addCandidate(const std::string& fundation, int componentId, const std::string& transport, int priority, const std::string& address, int port, std::string type)
	{
		addAttribute(std::make_shared<CandidateAttribute>(fundation, componentId, transport, priority, address, port, type));
	}

	void setNumberOfPorts(int number)
	{
		numberOfPorts = number;
	}

	int getNumberOfPorts()
	{
		return numberOfPorts;
	}

	bool hasAttribute(std::string key)
	{
		//For each attribute
		for (auto attr : attributes)
			//Check if the one searhced
			if (strcasecmp(attr->getField().c_str(), key.c_str())==0)
				//Found
				return true;
		//Not found
		return false;
	}

	void removeAttribute(const std::shared_ptr<Attribute>& attr)
	{
		//remove attribute
		attributes.erase( std::remove( attributes.begin(), attributes.end(), attr ), attributes.end() ); 
	}
private:
	std::string media;
	int port = 0;
	int numberOfPorts = 0;
	std::vector<std::string> proto;
	std::vector<std::string> formats;
	std::shared_ptr<Information> information;
	std::vector<std::shared_ptr<Connection>> connections;
	std::vector<std::shared_ptr<Bandwidth>> bandwidths;
	std::vector<std::shared_ptr<Attribute>> attributes;
	std::shared_ptr<Key> key;
};

}
#endif
