#ifndef _SDP_ORIGIN_H_
#define _SDP_ORIGIN_H_

#include <string>
#include <memory>

namespace sdp
{

class Origin 
{
public:
	using shared = std::shared_ptr<Origin>;
public:
	Origin() = default;
	Origin(const std::string& username, int64_t sessId, int64_t sessVersion, const std::string& nettype, const std::string& addrtype, const std::string& address)
	{
		this->username = username;
		this->sessId = sessId;
		this->sessVersion = sessVersion;
		this->nettype = nettype;
		this->addrtype = addrtype;
		this->address = address;
	}
	virtual ~Origin() = default;

	std::shared_ptr<Origin> clone()
	{
		return std::make_shared<Origin>(username, sessId, sessVersion, nettype, addrtype, address);
	}

	std::string toString()
	{
		return "o=" + username + " " + std::to_string(sessId) + " " + std::to_string(sessVersion) + " " + nettype + " " + addrtype + " " + address + "\r\n";
	}

	std::string getAddress()
	{
		return address;
	}

	void setAddress(const std::string& address)
	{
		this->address = address;
	}

	std::string getAddrtype()
	{
		return addrtype;
	}

	void setAddrtype(const std::string& addrtype)
	{
		this->addrtype = addrtype;
	}

	std::string getNettype()
	{
		return nettype;
	}

	void setNettype(const std::string& nettype)
	{
		this->nettype = nettype;
	}

	int64_t getSessId()
	{
		return sessId;
	}

	void setSessId(int64_t sessId)
	{
		this->sessId = sessId;
	}

	int64_t getSessVersion()
	{
		return sessVersion;
	}

	void setSessVersion(int64_t sessVersion)
	{
		this->sessVersion = sessVersion;
	}

	std::string getUsername()
	{
		return username;
	}

	void setUsername(const std::string& username)
	{
		this->username = username;
	}

private:
	std::string username;
	int64_t sessId = 0;
	int64_t sessVersion = 0;
	std::string nettype;
	std::string addrtype;
	std::string address;
	
};

}
#endif
