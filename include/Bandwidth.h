#ifndef _SDP_BANDWIDTH_H_
#define _SDP_BANDWIDTH_H_

#include <string>

namespace sdp
{

class Bandwidth
{
public:
	using shared = std::shared_ptr<Bandwidth>;
public:
	Bandwidth() = default;

	Bandwidth(const std::string& type, const std::string& bandwidth)
	{
		this->type = type;
		this->bandwidth = bandwidth;
	}

	Bandwidth(const std::string& type, int bandwidth)
	{
		this->type = type;
		this->bandwidth = bandwidth;
	}
	virtual ~Bandwidth() = default;

	std::string toString()
	{
		return "b=" + type + ":" + bandwidth + "\r\n";
	}

	std::shared_ptr<Bandwidth> clone()
	{
		//Return cloned one
		return std::make_shared<Bandwidth>(type, bandwidth);
	}

	std::string getBandwidth()
	{
		return bandwidth;
	}

	void setBandwidth(const std::string& bandwidth)
	{
		this->bandwidth = bandwidth;
	}

	std::string getType()
	{
		return type;
	}

	void setType(const std::string& type)
	{
		this->type = type;
	}

private:
	std::string type;
	std::string bandwidth;

};

};
#endif
