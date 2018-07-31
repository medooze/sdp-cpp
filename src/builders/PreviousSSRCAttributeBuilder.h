#ifndef _SDP_IMPL_PREVIOUS_SSRC_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_PREVIOUS_SSRC_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/PreviousSSRCAttribute.h"

using namespace sdp;
using namespace abnf;

class PreviousSSRCAttributeBuilder :
	public Builder
{
private:
	PreviousSSRCAttribute* previous;

public:
	virtual
	void* visit(Rule_previous_ssrc_attr* rule)
	{
		//New attr
		previous = new PreviousSSRCAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return previous;
	}

	virtual
	void* visit(Rule_ssrc_id* rule)
	{
		//Get value
		std::string ssrc = rule->spelling;
		//Set value
		previous->addSSRC(ssrc);
		//Return it
		return NULL;
	}
};

#endif
