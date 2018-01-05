#ifndef _SDP_SESSION_DESCRIPTION_H_
#define _SDP_SESSION_DESCRIPTION_H_

#include "Origin.h"
#include "Bandwidth.h"
#include "SessionName.h"
#include "Information.h"
#include "Connection.h"
#include "Attribute.h"
#include "Key.h"
#include "Time.h"
#include "MediaDescription.h"

namespace sdp {
class URI;
class SessionDescription
{
public:
	static std::shared_ptr<SessionDescription> parse(const std::string& string);

public:	
	SessionDescription(int version = 0);
	virtual ~SessionDescription() = default;
	
	std::shared_ptr<SessionDescription> clone();
	std::string toString();

private:
	int version;
	std::shared_ptr<Origin> origin;
	std::shared_ptr<URI> uri;
	std::shared_ptr<SessionName> sessionName;
	std::shared_ptr<Information> information;
	std::vector<std::string> emails;
	std::vector<std::string> phones;
	std::shared_ptr<Connection> connection;
	std::vector<std::shared_ptr<Bandwidth>> bandwidths;
	std::vector<std::shared_ptr<Attribute>> attributes;
	std::shared_ptr<Key> key;
	std::vector<std::shared_ptr<Time>> times;
	std::vector<std::shared_ptr<MediaDescription>> medias; 
};

}
#endif

