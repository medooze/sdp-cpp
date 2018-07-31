#ifndef _SDP_IMPL_FORMAT_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_FORMAT_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/FormatAttribute.h"

using namespace sdp;
using namespace abnf;

class FormatAttributeBuilder :
	public Builder
{
private:
	FormatAttribute* attr;

public:
	virtual
	void* visit(Rule_fmtp_attr* rule)
	{
		//New attr
		attr = new FormatAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_fmt* rule)
	{
		//Get value
		int fmt = std::stoi(rule->spelling);
		//Set it
		attr->setFmt(fmt);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_param_list* rule)
	{
		//Get value
		std::string parameters = rule->spelling;
		//Set it
		attr->setParameters(parameters);
		//Return it
		return NULL;
	}
};
#endif
