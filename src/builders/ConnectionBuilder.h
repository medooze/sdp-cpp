#ifndef _SDP_IMPL_CONNECTION_BUILDER_H_
#define _SDP_IMPL_CONNECTION_BUILDER_H_

#include "Builder.h"
#include "../../include/CandidateAttribute.h"

using namespace sdp;
using namespace abnf;

class ConnectionBuilder :
	public Builder
{
private:
	Connection* conn;

public:
	virtual
	void* visit(Rule_connection_field* rule)
	{
		//Create object
		conn = new Connection();
		//Generate
		visitRules(rule->rules);
		//Return it
		return conn;
	}

	virtual
	void* visit(Rule_nettype* rule)
	{
		//Generate
		std::string nettype = rule->spelling;
		//Set it
		conn->setNetType(nettype);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_addrtype* rule)
	{
		//Generate
		std::string addrtype = rule->spelling;
		//Set
		conn->setAddrType(addrtype);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_connection_address* rule)
	{
		//Generate
		std::string address = rule->spelling;
		//Set it
		conn->setAddress(address);
		//Return it
		return NULL;
	}

};

#endif
