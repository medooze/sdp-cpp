#ifndef _SDP_IMPL_TIME_BUILDER_H_
#define _SDP_IMPL_TIME_BUILDER_H_

#include "Builder.h"
#include "../../include/Timing.h"

using namespace sdp;
using namespace abnf;

class TimeBuilder :
public Builder
{
private:
	Time* time;

public:

	virtual
	void* visit(Rule_time_repeat_field* rule)
	{
		//Create object
		time = new Time();
		//Generate it
		Builder::visit(rule);
		//Return it
		return time;
	}

	virtual
	void* visit(Rule_start_time* rule)
	{
		//Get start
		int start = std::stoi(rule->spelling);
		//Set start
		time->setStart(start);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_stop_time* rule)
	{
		//Get stop
		int stop = std::stoi(rule->spelling);
		//Set start
		time->setStop(stop);
		//Return it
		return NULL;
	}
};

#endif
