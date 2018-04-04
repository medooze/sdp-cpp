#ifndef _SDP_SSRC_ATTRIBUTE_H_
#define _SDP_SSRC_ATTRIBUTE_H_

#include "Attribute.h"

namespace sdp
{

class SSRCAttribute :
	public Attribute
{
public:
	using shared = std::shared_ptr<SSRCAttribute>;
public:
	SSRCAttribute() = default;
	SSRCAttribute(uint32_t ssrc, const std::string& attrField, const std::string& attrValue)
	{
		this->ssrc = ssrc;
		this->attrField = attrField;
		this->attrValue = attrValue;
	}
	virtual ~SSRCAttribute() = default;

	virtual std::shared_ptr<Attribute> clone() override
	{
		return std::make_shared<SSRCAttribute>(ssrc, attrField, attrValue);
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
		return std::to_string(ssrc) + " " + attrField + (!attrValue.empty() ? ":" + attrValue : "");
	}

	uint32_t getSSRC()
	{
		return ssrc;
	}

	void setSSRC(uint32_t ssrc)
	{
		this->ssrc = ssrc;
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
	uint32_t ssrc = 0;
	std::string attrField;
	std::string attrValue;
};

}
#endif
