#ifndef SDP_SESSION_DESCRIPTION_BUILDER_H_
#define SDP_SESSION_DESCRIPTION_BUILDER_H_

#include "Builder.h"
#include "../../include/SessionDescription.h"

using namespace sdp;
using namespace abnf;

class SessionDescriptionBuilder :
	public Builder
{
private:
	SessionDescription* sdp;
public:
	virtual	void* visit(Rule_session_description* rule);
	virtual void* visit(Rule_proto_version* rule);
	virtual void* visit(Rule_origin_field* rule);
	virtual void* visit(Rule_session_name_field* rule);
	virtual void* visit(Rule_information_field* rule);
	virtual void* visit(Rule_attribute_field* rule);
	virtual void* visit(Rule_uri_field* rule);
	virtual void* visit(Rule_email_field* rule);
	virtual void* visit(Rule_phone_field* rule);
	virtual void* visit(Rule_connection_field* rule);
	virtual void* visit(Rule_bandwidth_field* rule);
	virtual void* visit(Rule_time_repeat_field* rule);
	virtual void* visit(Rule_key_field* rule);
	virtual void* visit(Rule_media_description* rule);
};

#endif

