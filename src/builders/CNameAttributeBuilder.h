#ifndef _SDP_IMPL_CNAME_ATTRIBUTTE_BUILDER_H_
#define _SDP_IMPL_CNAME_ATTRIBUTTE_BUILDER_H_

#include "Builder.h"
#include "../../include/CNameAttribute.h"

using namespace sdp;
using namespace abnf;

class CNameAttributeBuilder :
	public Builder
{
private:
	CNameAttribute* attr;

public:

	virtual
	void* visit(Rule_cname_attr* rule)
	{
		//New attr
		attr = new CNameAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_cname* rule)
	{
		//Get value
		std::string cname = rule->spelling;
		//Set value
		attr->setCName(cname);
		//Return it
		return NULL;
	}
};

#endif
