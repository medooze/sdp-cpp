#ifndef _SDP_SESSION_DESCRIPTION_H_
#define _SDP_SESSION_DESCRIPTION_H_

#include "Origin.h"
#include "Bandwidth.h"
#include "SessionName.h"
#include "Information.h"
#include "Connection.h"
#include "Attribute.h"
#include "Key.h"
#include "Timing.h"
#include "MediaDescription.h"

namespace sdp {
class URI;
class SessionDescription
{
public:
	using shared = std::shared_ptr<SessionDescription>;

public:
	static SessionDescription::shared parse(const std::string& string);

public:	
	SessionDescription(int version = 0);
	~SessionDescription() = default;
	
	SessionDescription::shared clone();
	std::string toString();


	template<typename T = Attribute>
	std::shared_ptr<T> getAttribute(const std::string& key)
	{
		//For each attribute
		for (auto attr : attributes)
			//Check if the one searhced
			if (strcasecmp(attr->getField().c_str(), key.c_str()) == 0)
				//Try to convert it
				return std::dynamic_pointer_cast<T>(attr);
		//Not found
		return std::shared_ptr<T>();
	}

	template<typename T>
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
	std::vector<std::shared_ptr<T>> getAttributes(const std::string& key)
	{
		//Create list
		auto attrs = std::vector<std::shared_ptr<T>>();
		//For each attribute
		for (auto attr : attributes)
			//Check if the one searhced
			if (strcasecmp(attr->getField().c_str(), key.c_str()) == 0)
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

	template<typename Type, class ...Args>
	void addAttribute(Args... args)
	{
		//Add attribute
		addAttribute(std::make_shared<Type>(Type{ std::forward<Args>(args)... }));
	}


	std::vector<Attribute::shared> getAttributes();
	
	int getVersion();
	Connection::shared getConnection();
	std::vector<std::string> getEmails();
	Information::shared getInformation();
	Key::shared getKey();
	std::vector<MediaDescription::shared> getMedias();
	Origin::shared getOrigin();
	std::vector<std::string> getPhones();
	SessionName::shared getSessionName();
	std::vector<Time::shared> getTimes();
	std::string getUri();
	std::vector<Bandwidth::shared> getBandwidths();

	void setVersion(int version);
	void setOrigin(const Origin::shared& origin);
	void setOrigin(const std::string& username, uint64_t sessId, uint64_t sessVersion, const std::string& nettype, const std::string& addrtype, const std::string& address);
	void setOrigin(const std::string& username, int sessId, uint64_t sessVersion, const std::string& nettype, const std::string& addrtype, const std::string& address);
	void setOrigin(const std::string& username, int sessId, int sessVersion, const std::string& nettype, const std::string& addrtype, const std::string& address);
	void setUri(const std::string& uri);
	void setSessionName(std::string sessionName);
	void setSessionName(const SessionName::shared& sessionName);
	void setInformation(const Information::shared& information);
	void setConnection(const Connection::shared& connection);
	void setEmails(const std::vector<std::string>& emails);
	void addEmail(const std::string& email);
	void setPhones(const std::vector<std::string>& phones);
	void addPhone(const std::string& email);
	void setConnection(const std::string& netType, const std::string& addrType, const std::string& address);
	void addBandwidth(const std::string& type, int bandwidth);
	void addBandwidth(const std::string& type, const std::string& bandwidth);
	void addBandwidth(const Bandwidth::shared& bandwith);
	void addAttribute(const Attribute::shared& attr);
	void setAttributes(const std::vector<Attribute::shared>& attributes);
	void addAttribute(const std::string& attr);
	void addAttribute(const std::string& attr, const std::string& value);
	void setTimes(const std::vector<Time::shared>& times);
	void addTime(int start, int stop);
	void addTime(const Time::shared& time);
	void setKey(const Key::shared key);
	void setMedias(const std::vector<MediaDescription::shared>& medias);
	void addMedia(const MediaDescription::shared& media);
	MediaDescription::shared getMedia(const std::string& media);
	MediaDescription::shared getMediaById(const std::string& id);
	
private:
	int version;
	Origin::shared origin;
	std::string uri;
	SessionName::shared sessionName;
	Information::shared information;
	std::vector<std::string> emails;
	std::vector<std::string> phones;
	Connection::shared connection;
	std::vector<Bandwidth::shared> bandwidths;
	std::vector<Attribute::shared> attributes;
	Key::shared key;
	std::vector<Time::shared> times;
	std::vector<MediaDescription::shared> medias; 
};

}
#endif

