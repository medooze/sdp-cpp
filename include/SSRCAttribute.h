#ifndef _SDP_SSRC_ATTRIBUTE_H_
#define _SDP_SSRC_ATTRIBUTE_H_

#include "Attribute.h"

namespace sdp
{

class SSRCAttribute :
	public Attribute
{
public:
	SSRCAttribute() = default;
	SSRCAttribute(int64_t SSRC, const std::string& attrField, const std::string& attrValue)
	{
		this->SSRC = SSRC;
		this->attrField = attrField;
		this->attrValue = attrValue;
	}
	virtual ~SSRCAttribute() = default;

	virtual std::shared_ptr<Attribute> clone() override
	{
		return std::make_shared<SSRCAttribute>(SSRC, attrField, attrValue);
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
		return "ssrc";
	}

	virtual	std::string getValue() override
	{
		return std::to_string(SSRC) + " " + attrField + (!attrValue.empty() ? ":" + attrValue : "");
	}

	int64_t getSSRC()
	{
		return SSRC;
	}

	void setSSRC(int64_t SSRC)
	{
		this->SSRC = SSRC;
	}

	std::string getAttrField()
	{
		return attrField;
	}

	void setAttrField(const std::string& attrField)
	{
		this->attrField = attrField;
	}

	std::string getAttrValue()
	{
		return attrValue;
	}

	void setAttrValue(const std::string& attrValue)
	{
		this->attrValue = attrValue;
	}

private:
	int64_t SSRC = 0;
	std::string attrField;
	std::string attrValue;
};

}
#endif
