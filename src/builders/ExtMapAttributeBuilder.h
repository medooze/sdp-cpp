#ifndef _SDP_IMPL_EXTMAP_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_EXTMAP_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/ExtMapAttribute.h"

using namespace sdp;
using namespace abnf;

class ExtMapAttributeBuilder :
	public Builder
{
private:
	ExtMapAttribute* extmap;

public:
	virtual
	void* visit(Rule_extmap_attribute* rule)
	{
		//New attr
		extmap = new ExtMapAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return extmap;
	}

	virtual
	void* visit(Rule_direction* rule)
	{
		//Get value
		std::string value = rule->spelling;
		//Set type
		extmap->setDirection(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_extension_identifier* rule)
	{
		//Get type
		int value = std::stoi(rule->spelling);
		//Set type
		extmap->setId(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_extension_name* rule)
	{
		//Get value
		std::string value = rule->spelling;
		//Set type
		extmap->setUri(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_extension_attributes* rule)
	{
		//Get value
		std::string value = rule->spelling;
		//Set type
		extmap->setAttributes(value);
		//Return it
		return NULL;
	}
};

#endif
