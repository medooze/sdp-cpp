#ifndef _SDP_CONNECTION_H_
#define _SDP_CONNECTION_H_

#include <string>

namespace sdp
{

class Connection
{
public:
	using shared = std::shared_ptr<Connection>;
public:
	Connection() = default;

	Connection(const std::string &netType, const std::string &addrType, const std::string & address)
	{
		this->netType = netType;
		this->addrType = addrType;
		this->address = address;
	}

	std::shared_ptr<Connection> clone()
	{
		return std::make_shared<Connection>(netType, addrType, address);
	}

	std::string toString()
	{
		return "c=" + netType + " " + addrType + " " + address + "\r\n";
	}

	std::string getAddrType()
	{
		return addrType;
	}

	void setAddrType(const std::string & addrType)
	{
		this->addrType = addrType;
	}

	std::string getAddress()
	{
		return address;
	}

	void setAddress(const std::string & address)
	{
		this->address = address;
	}

	std::string getNetType()
	{
		return netType;
	}

	void setNetType(const std::string & netType)
	{
		this->netType = netType;
	}

private:
	std::string netType;
	std::string addrType;
	std::string address;
};

}
#endif
