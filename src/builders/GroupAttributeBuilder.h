#ifndef _SDP_IMPL_GROUP_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_GROUP_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/GroupAttribute.h"

using namespace sdp;
using namespace abnf;

class GroupAttributeBuilder :
	public Builder
{
private:
	GroupAttribute* group;

public:	
	virtual
	void* visit(Rule_group_attr* rule)
	{
		//New attr
		group = new GroupAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return group;
	}

	virtual
	void* visit(Rule_identification_tag* rule)
	{
		//Get type
		std::string tag = rule->spelling;
		//Set type
		group->addTag(tag);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_group_semantics* rule)
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
