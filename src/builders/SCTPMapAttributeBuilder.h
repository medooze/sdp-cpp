#ifndef _SDP_IMPL_SCTMPAP_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_SCTMPAP_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/SCTPMapAttribute.h"

using namespace sdp;
using namespace abnf;

class SCTPMapAttributeBuilder :
	public Builder
{
private:
	SCTPMapAttribute* sctpmap;

public:

	virtual
	void* visit(Rule_sctpmap_attr* rule)
	{
		//New attr
		sctpmap = new SCTPMapAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return sctpmap;
	}

	virtual
	void* visit(Rule_sctpmap_number* rule)
	{
		//Get number
		int value = std::stoi(rule->spelling);
		//Set type
		sctpmap->setNumber(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_app* rule)
	{
		//Get app
		std::string value = rule->spelling;
		//Set type
		sctpmap->setApp(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_streams* rule)
	{
		//Get number
		int value = std::stoi(rule->spelling);
		//Set type
		sctpmap->setStreams(value);
		//Return it
		return NULL;
	}

};

#endif
