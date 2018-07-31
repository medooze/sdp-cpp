#ifndef _SDP_IMPL_KEY_BUILDER_H_
#define _SDP_IMPL_KEY_BUILDER_H_

#include "Builder.h"
#include "Key.h"

using namespace sdp;
using namespace abnf;

class KeyBuilder :
	public Builder
{
private:
	Key* key;

public:
	virtual
	void* visit(Rule_key_field* rule)
	{
		//New kwy
		key = new Key();
		//Generate it
		Builder::visit(rule);
		//Return it
		return key;
	}

	virtual
	void* visit(Rule_prompt_key_type* rule)
	{
		//Get type
		std::string type = rule->spelling;
		//Set type
		key->setType(type);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_clear_key_type* rule)
	{
		//Get type and key
		std::string type = rule->rules[0]->spelling;
		std::string k = rule->rules[2]->spelling;
		//Set type
		key->setType(type);
		//Set type
		key->setKey(k);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_base64_key_type* rule)
	{
		//Get type and key
		std::string type = rule->rules[0]->spelling;
		std::string k = rule->rules[2]->spelling;
		//Set type
		key->setType(type);
		//Set type
		key->setKey(k);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_uri_key_type* rule)
	{
		//Get type and key
		std::string type = rule->rules[0]->spelling;
		std::string k = rule->rules[2]->spelling;
		//Set type
		key->setType(type);
		//Set type
		key->setKey(k);
		//Return it
		return NULL;
	}

};

#endif
