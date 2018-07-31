#ifndef _SDP_IMPL_SSRC_GROUP_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_SSRC_GROUP_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/SSRCGroupAttribute.h"

using namespace sdp;
using namespace abnf;

class SSRCGroupAttributeBuilder :
	public Builder
{
private:
	SSRCGroupAttribute* group;
	
public:

	virtual
	void* visit(Rule_ssrc_group_attr* rule)
	{
		//New attr
		group = new SSRCGroupAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return group;
	}

	virtual
	void* visit(Rule_ssrc_id* rule)
	{
		//Get type
		uint32_t ssrc = std::stoll(rule->spelling);
		//Set type
		group->addSSRC(ssrc);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_ssrc_group_semantics* rule)
	{
		//Get type
		std::string semantics = rule->spelling;
		//Set type
		group->setSemantics(semantics);
		//Return it
		return NULL;
	}
};

#endif
