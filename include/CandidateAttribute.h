#ifndef _SDP_CANDIDATE_ATTRIBUTE_H_
#define _SDP_CANDIDATE_ATTRIBUTE_H_

#include <string>
#include <vector>

namespace sdp
{

class CandidateAttribute :
	public Attribute
{
public:
	using shared = std::shared_ptr<CandidateAttribute>;
public:

	class Extension
	{
	public:

		Extension() = default;

		Extension(const std::string& name, const std::string& value)
		{
			this->name = name;
			this->value = value;
		}

		void setName(const std::string& name)
		{
			this->name = name;
		}

		void setValue(const std::string& value)
		{
			this->value = value;
		}
	private:
		friend class CandidateAttribute;
		std::string name;
		std::string value;
	
	};

public:
	CandidateAttribute() = default;
	virtual ~CandidateAttribute() = default;

	CandidateAttribute(const std::string& fundation, int componentId, const std::string& transport, int priority, const std::string& address, int port, const std::string& type)
	{
		this->fundation = fundation;
		this->componentId = componentId;
		this->transport = transport;
		this->priority = priority;
		this->address = address;
		this->port = port;
		this->type = type;
	}

	virtual std::shared_ptr<Attribute> clone() override
	{
		return std::make_shared<CandidateAttribute>(fundation, componentId, transport, priority, address, port, type);
	}

	virtual std::string toString() override
	{
		//Get value
		std::string value = getValue();
		//Generic attr
		return "a=" + getField() + (!value.empty() ? ":" + value : "") + "\r\n";
	}

	virtual std::string getField() override
	{
		return "candidate";
	}

	virtual std::string getValue() override
	{
		std::string value = fundation + " " + std::to_string(componentId) + " " + transport + " " + std::to_string(priority) + " " + address + " " + std::to_string(port) + " typ " + type;
		if (!relAddr.empty())
			value += " raddr " + relAddr;
		if (relPort > 0)
			value += " rport " + std::to_string(relPort);
		for (auto ext : extensions)
			value += " " + ext->name + " " + ext->value;
		return value;
	}

	std::string getAddress()
	{
		return address;
	}

	void setAddress(const std::string& address)
	{
		this->address = address;
	}

	int getComponentId()
	{
		return componentId;
	}

	void setComponentId(int componentId)
	{
		this->componentId = componentId;
	}

	std::vector<std::shared_ptr<Extension>> getExtensions()
	{
		return extensions;
	}

	void setExtensions(const std::vector<std::shared_ptr<Extension>>& extensions)
	{
		this->extensions = extensions;
	}

	std::string getFundation()
	{
		return fundation;
	}

	void setFundation(const std::string& fundation)
	{
		this->fundation = fundation;
	}

	int getPort()
	{
		return port;
	}

	void setPort(int port)
	{
		this->port = port;
	}

	int getPriority()
	{
		return priority;
	}

	void setPriority(int priority)
	{
		this->priority = priority;
	}

	std::string getRelAddr()
	{
		return relAddr;
	}

	void setRelAddr(const std::string& relAddr)
	{
		this->relAddr = relAddr;
	}

	int getRelPort()
	{
		return relPort;
	}

	void setRelPort(int relPort)
	{
		this->relPort = relPort;
	}

	std::string getTransport()
	{
		return transport;
	}

	void setTransport(const std::string& transport)
	{
		this->transport = transport;
	}

	std::string getType()
	{
		return type;
	}

	void setType(std::string type)
	{
		this->type = type;
	}

	void addExtension(const std::string& name, const std::string& value)
	{
		extensions.push_back(std::make_shared<Extension>(Extension(name, value)));
	}

	void addExtension(const std::shared_ptr<Extension> &extension)
	{
		extensions.push_back(extension);
	}

private:
	std::string fundation;
	int componentId = 0;
	std::string transport;
	int priority = 0;
	std::string address;
	int port = 0;
	std::string type;
	std::string relAddr;
	int relPort = 0;
	std::vector<std::shared_ptr<Extension>> extensions;
};

}
#endif
