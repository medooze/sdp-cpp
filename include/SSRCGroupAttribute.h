#ifndef _SDP_SSRC_GROUP_ATTRIBUTE_H_
#define _SDP_SSRC_GROUP_ATTRIBUTE_H_

#include <string>
#include <list>
#include <vector>

#include "Attribute.h"

namespace sdp
{

class SSRCGroupAttribute :
	public Attribute
{
public:
	SSRCGroupAttribute() = default;

	SSRCGroupAttribute(const std::string& semantics)
	{
		this->semantics = semantics;
	}

	SSRCGroupAttribute(const std::string&, const std::vector<int64_t>& ssrcs)
	{
		this->semantics = semantics;
		this->SSRCIds = ssrcs;
	}
	virtual ~SSRCGroupAttribute() = default;

	virtual std::shared_ptr<Attribute> clone()
	{
		return std::make_shared<SSRCGroupAttribute>(semantics, SSRCIds);
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
		return "ssrc-group";
	}

	virtual std::string getValue() override
	{
		std::string value = semantics;
		for (auto id : SSRCIds)
			value += " " + std::to_string(id);
		return value;
	}

	std::vector<int64_t> getSSRCIds()
	{
		return SSRCIds;
	}

	void setSSRCIds(const std::vector<int64_t>& SSRCIds)
	{
		this->SSRCIds = SSRCIds;
	}

	void addSSRCId(int64_t ssrcId)
	{
		SSRCIds.push_back(ssrcId);
	}

	std::string getSemantics()
	{
		return semantics;
	}

	void setSemantics(const std::string& semantics)
	{
		this->semantics = semantics;
	}

private:
	std::string semantics;
	std::vector<int64_t> SSRCIds;

};

}
#endif
