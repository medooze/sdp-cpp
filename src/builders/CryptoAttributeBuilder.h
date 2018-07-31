#ifndef _SDP_IMPL_CRYPTO_ATTRIBUTE_BUILDER_H_
#define _SDP_IMPL_CRYPTO_ATTRIBUTE_BUILDER_H_

#include "Builder.h"
#include "../../include/CryptoAttribute.h"

using namespace sdp;
using namespace abnf;


class CryptoAttributeBuilder :
public Builder
{
private:
	CryptoAttribute* crypto;
	std::shared_ptr<CryptoAttribute::KeyParam> param;

public:

	virtual
	void* visit(Rule_crypto_attribute* rule)
	{
		//New attr
		crypto = new CryptoAttribute();
		//Generate it
		Builder::visit(rule);
		//Return it
		return crypto;
	}

	virtual
	void* visit(Rule_tag* rule)
	{
		//Get type
		int tag = std::stoi(rule->spelling);
		//Set type
		crypto->setTag(tag);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_crypto_suite* rule)
	{
		//Get suite
		std::string suite = rule->spelling;
		//Set type
		crypto->setSuite(suite);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_session_param* rule)
	{
		//Get type
		std::string sessionParam = rule->spelling;
		//Set type
		crypto->setSessionParams(sessionParam);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_key_param* rule)
	{
		//New attr
		param = std::make_shared<CryptoAttribute::KeyParam>();
		//Generate it
		Builder::visit(rule);
		//Add it
		crypto->addKeyParam(param);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_key_method* rule)
	{
		//Get method
		std::string method = rule->spelling;
		//Set type
		param->setMethod(method);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_key_salt* rule)
	{
		//Get info
		std::string info = rule->spelling;
		//Set type
		param->setInfo(info);
		//Return it
		return NULL;
	}
};

#endif
