#ifndef _SDP_IMPL_FINGERPRINT_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_FINGERPRINT_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/FingerprintAttribute.h"

using namespace sdp;
using namespace abnf;

class FingerprintAttributeBuilder :
	public Builder
{
private:
	FingerprintAttribute* fingerprint;

public:
	virtual
	void* visit(Rule_fingerprint_attribute* rule)
	{
		//New attr
		fingerprint = new FingerprintAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return fingerprint;
	}

	virtual
	void* visit(Rule_hash_func* rule)
	{
		//Get hash func
		std::string value = rule->spelling;
		//Set type
		fingerprint->setHashFunc(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_fingerprint* rule)
	{
		//Get fingerprint
		std::string value = rule->spelling;
		//Set type
		fingerprint->setFingerprint(value);
		//Return it
		return NULL;
	}
};

#endif
