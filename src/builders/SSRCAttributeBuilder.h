#ifndef _SDP_IMPL_SSRC_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_SSRC_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/SSRCAttribute.h"

using namespace sdp;
using namespace abnf;

class SSRCAttributeBuilder :
public Builder
{
private:
	SSRCAttribute* ssrc;

public:

	virtual
	void* visit(Rule_ssrc_attr* rule)
	{
		//New attr
		ssrc = new SSRCAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return ssrc;
	}

	virtual
	void* visit(Rule_ssrc_id* rule)
	{
		//Get type
		uint32_t ssrcId = std::stoll(rule->spelling);
		//Set type
		ssrc->setSSRC(ssrcId);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_att_field* rule)
	{
		//Get type
		std::string field = rule->spelling;
		//Set type
		ssrc->setAttrField(field);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_att_value* rule)
	{
		//Get type
		std::string value = rule->spelling;
		//Set type
		ssrc->setAttrValue(value);
		//Return it
		return NULL;
	}
};

#endif
