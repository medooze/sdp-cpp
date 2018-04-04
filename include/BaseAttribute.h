#ifndef _SDP_BASE_ATTRIBUTE_H_
#define _SDP_BASE_ATTRIBUTE_H_

#include <string>

#include "Attribute.h"

namespace sdp
{
class BaseAttribute :
	public Attribute
{
public:
	using shared = std::shared_ptr<BaseAttribute>;
public:
	BaseAttribute() = default;
	virtual ~BaseAttribute() = default;

	BaseAttribute(const std::string& field)
	{
		this->field = field;
	}

	BaseAttribute(const std::string& field, const std::string& value)
	{
		this->field = field;
		this->value = value;
	}

	BaseAttribute(const std::string& field, int value)
	{
		this->field = field;
		this->value = std::to_string(value);
	}

	virtual std::shared_ptr<Attribute> clone() override
	{
		return std::make_shared<BaseAttribute>(field, value);
	}

	virtual std::string toString() override
	{
		//Get value
		std::string value = getValue();
		//Generic attr
		return "a=" + getField() + (!value.empty() ? ":" + value : "") + "\r\n";
	}

	virtual	std::string getField() override
	{
		return field;
	}

	void setField(const std::string& field)
	{
		this->field = field;
	}

	virtual std::string getValue() override
	{
		return value;
	}

	void setValue(const std::string& value)
	{
		this->value = value;
	}
private:
	std::string field;
	std::string value;
};

}
#endif
