#ifndef _SDP_IMPL_MID_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_MID_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/MidAttribute.h"

using namespace sdp;
using namespace abnf;

class MidAttributeBuilder :
	public Builder
{
private:
	MidAttribute* mid;

public:
	virtual
	void* visit(Rule_mid_attr* rule)
	{
		//New attr
		mid = new MidAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return mid;
	}

	virtual
	void* visit(Rule_identification_tag* rule)
	{
		//Get type
		std::string tag = rule->spelling;
		//Set type
		mid->setIdentificationTag(tag);
		//Return it
		return NULL;
	}
};

#endif
