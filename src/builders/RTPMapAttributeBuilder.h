#ifndef _SDP_IMPL_RTPMAP_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_RTPMAP_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/RTPMapAttribute.h"

using namespace sdp;
using namespace abnf;

class RTPMapAttributeBuilder :
	public Builder
{
private:
	RTPMapAttribute* attr;

public:

	virtual
	void* visit(Rule_rtpmap_attr* rule)
	{
		//New attr
		attr = new RTPMapAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_fmt* rule)
	{
		//Get type
		int fmt = std::stoi(rule->spelling);
		//Set type
		attr->setFormat(fmt);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_name* rule)
	{
		//Get type
		std::string name = rule->spelling;
		//Set type
		attr->setName(name);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_rate* rule)
	{
		//Get type
		int rate = std::stoi(rule->spelling);
		//Set type
		attr->setRate(rate);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_parameters* rule)
	{
		//Get type
		std::string parameters = rule->spelling;
		//Set type
		attr->setParameters(parameters);
		//Return it
		return NULL;
	}
};

#endif
