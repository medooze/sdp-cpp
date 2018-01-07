#ifndef _SDP_IMPL_ORIGIN_BUILDER_H_
#define _SDP_IMPL_ORIGIN_BUILDER_H_

#include "Builder.h"
#include "../../include/Origin.h"

using namespace sdp;
using namespace abnf;

class OriginBuilder :
public Builder
{
private:
	Origin *origin;

public:

	virtual
	void* visit(const Rule_origin_field* rule)
	{
		//Create object
		origin = new Origin();
		//Generate
		visitRules(rule->rules);
		//Return it
		return origin;
	}

	virtual
	void* visit(const Rule_username* rule)
	{
		//Generate
		std::string username = rule->spelling;
		//Set it
		origin->setUsername(username);
		//Return it
		return NULL;
	}

	virtual
	void* visit(const Rule_sess_id* rule)
	{
		//Generate
		int64_t sessId = std::stol(rule->spelling);
		//Set it
		origin->setSessId(sessId);
		//Return it
		return NULL;
	}

	virtual
	void* visit(const Rule_sess_version* rule)
	{
		//Generate
		int64_t sessVersion = std::stol(rule->spelling);
		//Sset it
		origin->setSessVersion(sessVersion);
		//Return it
		return NULL;
	}

	virtual
	void* visit(const Rule_nettype* rule)
	{
		//Generate
		std::string nettype = rule->spelling;
		//Set it
		origin->setNettype(nettype);
		//Return it
		return NULL;
	}

	virtual
	void* visit(const Rule_addrtype* rule)
	{
		//Generate
		std::string addrtype = rule->spelling;
		//Set
		origin->setAddrtype(addrtype);
		//Return it
		return NULL;
	}

	virtual
	void* visit(const Rule_unicast_address* rule)
	{
		//Generate
		std::string address = rule->spelling;
		//Set it
		origin->setAddress(address);
		//Return it
		return NULL;
	}
};

#endif
