#ifndef _SDP_CNAME_ATTRIBUTE_H_
#define _SDP_CNAME_ATTRIBUTE_H_

#include <string>

#include "Attribute.h"

namespace sdp
{
class CNameAttribute :
	public Attribute
{
public:
	using shared = std::shared_ptr<CNameAttribute>;	
public:
	CNameAttribute() = default;
	virtual ~CNameAttribute() = default;

	CNameAttribute(const std::string& cname)
	{
		this->cname = cname;
	}

	virtual std::shared_ptr<Attribute> clone() override
	{
		return std::make_shared<CNameAttribute>(cname);
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
		return "cname";
	}

	virtual std::string getValue() override
	{
		return cname;
	}

	std::string getCName()
	{
		return cname;
	}

	void setCName(const std::string& cname)
	{
		this->cname = cname;
	}
private:
	std::string cname;
};

}
#endif
