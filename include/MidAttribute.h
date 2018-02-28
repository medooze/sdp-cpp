#ifndef _SDP__MID_ATTRIBUTE_H_
#define _SDP__MID_ATTRIBUTE_H_

#include "Attribute.h"

namespace sdp
{

class MidAttribute :
	public Attribute
{
public:
	using shared = std::shared_ptr<MidAttribute>;
public:

	MidAttribute() = default;

	MidAttribute(const std::string& identificationTag)
	{
		this->identificationTag = identificationTag;
	}
	
	virtual ~MidAttribute() = default;

	virtual std::shared_ptr<Attribute> clone() override
	{
		return std::make_shared<MidAttribute>(identificationTag);
	}

	virtual	std::string toString() override
	{
		//Get value
		std::string value = getValue();
		//Generic attr
		return "a=" + getField() + (!value.empty() ? ":" + value : "") + "\r\n";
	}

	virtual	std::string getField() override
	{
		return "mid";
	}

	virtual std::string getValue() override
	{
		return identificationTag;
	}

	std::string getIdentificationTag()
	{
		return identificationTag;
	}

	void setIdentificationTag(const std::string& identificationTag)
	{
		this->identificationTag = identificationTag;
	}
private:
	std::string identificationTag;
};

}
#endif
