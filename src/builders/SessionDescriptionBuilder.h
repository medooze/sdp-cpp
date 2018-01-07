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
	virtual	void* visit(const Rule_session_description* rule);
	virtual void* visit(const Rule_proto_version* rule);
	virtual void* visit(const Rule_origin_field* rule);
	virtual void* visit(const Rule_session_name_field* rule);
	virtual void* visit(const Rule_information_field* rule);
	virtual void* visit(const Rule_attribute_field* rule);
	virtual void* visit(const Rule_uri_field* rule);
	virtual void* visit(const Rule_email_field* rule);
	virtual void* visit(const Rule_phone_field* rule);
	virtual void* visit(const Rule_connection_field* rule);
	virtual void* visit(const Rule_bandwidth_field* rule);
	virtual void* visit(const Rule_time_repeat_field* rule);
	virtual void* visit(const Rule_key_field* rule);
	virtual void* visit(const Rule_media_description* rule);
};

#endif

