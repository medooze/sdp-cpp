#ifndef _SDP_IMPL_CANDIDATE_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_CANDIDATE_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/CandidateAttribute.h"

using namespace sdp;
using namespace abnf;

class CandidateAttributeBuilder :
	public Builder
{
private:
	CandidateAttribute* candidate;
	std::shared_ptr<CandidateAttribute::Extension> extension;

public:

	virtual
	void* visit(Rule_candidate_attribute* rule)
	{
		//New attr
		candidate = new CandidateAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return candidate;
	}

	virtual
	void* visit(Rule_foundation* rule)
	{
		//Get value
		std::string value = rule->spelling;
		//Set type
		candidate->setFundation(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_component_id* rule)
	{
		//Get type
		int value = std::stoi(rule->spelling);
		//Set type
		candidate->setComponentId(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_transport* rule)
	{
		//Get value
		std::string value = rule->spelling;
		//Set type
		candidate->setTransport(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_priority* rule)
	{
		//Get type
		int value = std::stoi(rule->spelling);
		//Set type
		candidate->setPriority(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_connection_address* rule)
	{
		//Get value
		std::string value = rule->spelling;
		//Set type
		candidate->setAddress(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_port* rule)
	{
		//Get type
		int value = std::stoi(rule->spelling);
		//Set type
		candidate->setPort(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_candidate_types* rule)
	{
		//Get value
		std::string value = rule->spelling;
		//Set type
		candidate->setType(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_rel_addr* rule)
	{
		//Get value
		std::string value = rule->spelling;
		//Set type
		candidate->setRelAddr(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_rel_port* rule)
	{
		//Get type
		int value = std::stoi(rule->spelling);
		//Set type
		candidate->setRelPort(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_extension_att* rule)
	{
		//New attr
		extension = std::make_shared<CandidateAttribute::Extension>();
		//Generate it
		Builder::visit(rule);
		//Add it
		candidate->addExtension(extension);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_extension_att_name* rule)
	{
		//Get value
		std::string value = rule->spelling;
		//Set type
		extension->setName(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_extension_att_value* rule)
	{
		//Get value
		std::string value = rule->spelling;
		//Set type
		extension->setValue(value);
		//Return it
		return NULL;
	}
};

#endif