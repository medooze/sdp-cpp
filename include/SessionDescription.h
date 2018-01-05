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
	~SessionDescription() = default;
	
	std::shared_ptr<SessionDescription> clone();
	std::string toString();

	template<typename T = Attribute>
		std::shared_ptr<T> getAttribute(const std::string& key);
	template<typename T>
		std::shared_ptr<T> getAttribute();
	template<typename T = Attribute>
		std::vector<std::shared_ptr<T>> getAttributes(const std::string& key);
	std::vector<std::shared_ptr<Attribute>> getAttributes();
	
	int getVersion();
	std::shared_ptr<Connection> getConnection();
	std::vector<std::string> getEmails();
	std::shared_ptr<Information> getInformation();
	std::shared_ptr<Key> getKey();
	std::vector<std::shared_ptr<MediaDescription>> getMedias();
	std::shared_ptr<Origin> getOrigin();
	std::vector<std::string> getPhones();
	std::shared_ptr<SessionName> getSessionName();
	std::vector<std::shared_ptr<Time>> getTimes();
	std::shared_ptr<URI> getUri();
	std::vector<std::shared_ptr<Bandwidth>> getBandwidths();

	void setVersion(int version);
	void setOrigin(const std::shared_ptr<Origin>& origin);
	void setOrigin(const std::string& username, uint64_t sessId, uint64_t sessVersion, const std::string& nettype, const std::string& addrtype, const std::string& address);
	void setOrigin(const std::string& username, int sessId, uint64_t sessVersion, const std::string& nettype, const std::string& addrtype, const std::string& address);
	void setOrigin(const std::string& username, int sessId, int sessVersion, const std::string& nettype, const std::string& addrtype, const std::string& address);
	void setUri(const std::shared_ptr<URI>& uri);
	void setSessionName(std::string sessionName);
	void setSessionName(const std::shared_ptr<SessionName>& sessionName);
	void setInformation(const std::shared_ptr<Information>& information);
	void setConnection(const std::shared_ptr<Connection>& connection);
	void setEmails(const std::vector<std::string>& emails);
	void addEmail(const std::string& email);
	void setPhones(const std::vector<std::string>& phones);
	void addPhone(const std::string& email);
	void setConnection(const std::string& netType, const std::string& addrType, const std::string& address);
	void addBandwidth(const std::string& type, int bandwidth);
	void addBandwidth(const std::string& type, const std::string& bandwidth);
	void addBandwidth(const std::shared_ptr<Bandwidth>& bandwith);
	void addAttribute(const std::shared_ptr<Attribute>& attr);
	void setAttributes(const std::vector<std::shared_ptr<Attribute>>& attributes);
	void addAttribute(const std::string& attr);
	void addAttribute(const std::string& attr, const std::string& value);
	void setTimes(const std::vector<std::shared_ptr<Time>>& times);
	void addTime(int start, int stop);
	void addTime(const std::shared_ptr<Time>& time);
	void setKey(const std::shared_ptr<Key> key);
	void setMedias(const std::vector<std::shared_ptr<MediaDescription>>& medias);
	void addMedia(const std::shared_ptr<MediaDescription>& media);
	
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

