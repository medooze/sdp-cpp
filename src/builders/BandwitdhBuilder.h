#ifndef _SDP_IMPL_BANDWIDTH_BUILDER_H_
#define _SDP_IMPL_BANDWIDTH_BUILDER_H_

#include "Builder.h"
#include "../../include/Bandwidth.h"

using namespace sdp;
using namespace abnf;

class BandwitdhBuilder :
public Builder
{
private:
	Bandwidth* bandwidth;

public:
	virtual
	void* visit(Rule_bandwidth_field* rule)
	{
		//Create object
		bandwidth = new Bandwidth();
		//Generate
		visitRules(rule->rules);
		//Return it
		return bandwidth;
	}

	virtual
	void* visit(Rule_bandwidth* rule)
	{
		//Generate
		std::string value = rule->spelling;
		//Set it
		bandwidth->setBandwidth(value);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_bwtype* rule)
	{
		//Generate
		std::string type = rule->spelling;
		//Set
		bandwidth->setType(type);

		//Return it
		return NULL;
	}
};

#endif
