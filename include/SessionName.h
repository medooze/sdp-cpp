#ifndef _SDP_SESSION_NAME_
#define _SDP_SESSION_NAME_

#include <string>
#include <memory>

namespace sdp
{

class SessionName 
{
public:
	using shared = std::shared_ptr<SessionName>;
public:
	SessionName()
	{
	}

	SessionName(const std::string& name)
	{
		this->name = name;
	}

	std::shared_ptr<SessionName> clone()
	{
		return std::make_shared<SessionName>(name);
	}

	std::string toString()
	{
		return "s=" + name + "\r\n";
	}

	std::string getName()
	{
		return name;
	}

	void setName(const std::string& name)
	{
		this->name = name;
	}
private:	
	std::string name;
};

}
#endif
