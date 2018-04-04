#ifndef _SDP_GROUP_ATTRIBUTE_H_
#define _SDP_GROUP_ATTRIBUTE_H_

#include <vector>

#include "Attribute.h"

namespace sdp
{

class GroupAttribute :
	public Attribute
{
public:
	using shared = std::shared_ptr<GroupAttribute>;
public:
	GroupAttribute() = default;

	GroupAttribute(std::string semantics)
	{
		this->semantics = semantics;
	}
	virtual ~GroupAttribute() = default;

	virtual std::shared_ptr<Attribute> clone() override
	{
		//Clone
		auto cloned = std::make_shared<GroupAttribute>(semantics);
		//Clone data
		for (std::string tag : tags)
			//Add tag
			cloned->addTag(tag);
		//Return it
		return cloned;
	}

	virtual	std::string getField() override
	{
		return "group";
	}

	virtual	std::string getValue() override
	{
		std::string value = semantics;
		for (std::string tag : tags)
			value += " " + tag;
		return value;
	}

	virtual std::string toString() override
	{
		//Get value
		std::string value = getValue();
		//Generic attr
		return "a=" + getField() + (!value.empty() ? ":" + value : "") + "\r\n";
	}

	std::string getSemantics()
	{
		return semantics;
	}

	void setSemantics(const std::string& semantics)
	{
		this->semantics = semantics;
	}

	void addTag(const std::string& tag)
	{
		tags.push_back(tag);
	}
private:
	std::string semantics;
	std::vector<std::string> tags;
};

}
#endif