#ifndef _SDP_IMPL_BASE_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_BASE_ATTRIBUTE_BUILDER_H_


#include "Builder.h"
#include "../../include/BaseAttribute.h"

using namespace sdp;
using namespace abnf;


class BaseAttributeBuilder :
	public Builder
{
private:
	BaseAttribute* attr;

public:
	virtual
	void* visit(Rule_attribute* rule)
	{
		//New attr
		attr = new BaseAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_att_field* rule)
	{
		//Get type
		std::string field = rule->spelling;
		//Set type
		attr->setField(field);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_att_value* rule)
	{
		//Get type
		std::string value = rule->spelling;
		//Set type
		attr->setValue(value);
		//Return it
		return NULL;
	}
};

#endif
