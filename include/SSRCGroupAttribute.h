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
	using shared = std::shared_ptr<SSRCGroupAttribute>;
public:
	SSRCGroupAttribute() = default;

	SSRCGroupAttribute(const std::string& semantics)
	{
		this->semantics = semantics;
	}

	SSRCGroupAttribute(const std::string& semantics, const std::vector<uint32_t>& ssrcs)
	{
		this->semantics = semantics;
		this->ssrcs = ssrcs;
	}
	virtual ~SSRCGroupAttribute() = default;

	virtual std::shared_ptr<Attribute> clone()
	{
		return std::make_shared<SSRCGroupAttribute>(semantics, ssrcs);
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
		for (auto sssrc : ssrcs)
			value += " " + std::to_string(sssrc);
		return value;
	}

	std::vector<uint32_t> getSSRCs()
	{
		return ssrcs;
	}

	void setSSRCs(const std::vector<uint32_t>& ssrcs)
	{
		this->ssrcs = ssrcs;
	}

	void addSSRC(uint32_t ssrc)
	{
		ssrcs.push_back(ssrc);
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
	std::vector<uint32_t> ssrcs;

};

}
#endif
