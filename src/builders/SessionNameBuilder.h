#ifndef _SDP_IMPL_SESSION_NAME_BUILDER_H_
#define _SDP_IMPL_SESSION_NAME_BUILDER_H_

#include "Builder.h"
#include "../../include/SessionName.h"

using namespace sdp;
using namespace abnf;

class SessionNameBuilder :
public Builder
{
public:
	virtual
	void* visit(Rule_session_name_field* rule)
	{
		//Create object
		SessionName* sessionName = new SessionName();
		//Get value
		std::string value = rule->rules[2]->spelling;
		//Set value
		sessionName->setName(value);
		//Return it
		return sessionName;
	}

};

#endif
