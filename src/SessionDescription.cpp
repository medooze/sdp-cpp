#include "SessionDescription.h"
#include "abnf/ParserContext.hpp"
#include "abnf/ParserException.hpp"
#include "abnf/Rule_session_description.hpp"
#include "builders/SessionDescriptionBuilder.h"

using namespace sdp;

std::shared_ptr<SessionDescription> SessionDescription::parse(const std::string& str)
{
	abnf::ParserContext context(str, false);

	auto rule = abnf::Rule_session_description::parse(context);

	if (!rule)
	{
		
		
		std::cout << context.getErrorStack().front()<< "\n";
		std::cout << context.text<< "\n";
		std::cout << context.getErrorIndex()<< "\n";
		std::cout << context.getErrorStack().front() << "\n";
		
		throw new abnf::ParserException(
			"rule \"" + (std::string) context.getErrorStack().front() + "\" failed",
			context.text,
			context.getErrorIndex(),
			context.getErrorStack());
	}
	

	/*if (context.text.length() > context.index)
	{
		ParserException primaryError =
			new ParserException(
					"extra data found",
					context.text,
					context.index,
					new Stack<std::string>());

		if (context.getErrorIndex() > context.index)
		{
			ParserException secondaryError =
				new ParserException(
						"rule \"" + (std::string) context.getErrorStack().peek() + "\" failed",
						context.text,
						context.getErrorIndex(),
						context.getErrorStack());
!=
			primaryError.initCause(secondaryError);
		}

		throw primaryError;
	}
	*/
	
	//Create builder
	SessionDescriptionBuilder builder;
	//And make it visit the object to get the parser object
	auto sdp = (SessionDescription*)builder.visit(rule);

	//Release rules
	delete(rule);

	//Return pointer
	return std::shared_ptr<SessionDescription>(sdp);
}


SessionDescription::SessionDescription(int version)
{
	this->version = version;

}

std::shared_ptr<SessionDescription> SessionDescription::clone()
{
	//Create clone
	auto cloned = std::make_shared<SessionDescription>(version);

	//Clone data
	if (origin) cloned->setOrigin(origin->clone());
	if (sessionName) cloned->setSessionName(sessionName->clone());
	if (information) cloned->setInformation(information->clone());
	if (connection) cloned->setConnection(connection->clone());
	if (key) cloned->setKey(key->clone());
	if (!uri.empty()) cloned->setUri(uri);
	//For each email
	for (std::string email : emails)
		//Add it
		cloned->addEmail(email);
	//For each phone
	for (std::string phone : phones)
		//Add it
		cloned->addPhone(phone);
	//For each bandwidth
	for (auto bandwidth : bandwidths)
		//Add it
		cloned->addBandwidth(bandwidth->clone());
	//For each attribute
	for (auto attribute : attributes)
		//Add it
		cloned->addAttribute(attribute->clone());
	//For each time
	for (auto time : times)
		//Add it
		cloned->addTime(time->clone());
	//For each media
	for (auto media : medias)
		//Add it
		cloned->addMedia(media->clone());
	//return it
	return cloned;
}

std::string SessionDescription::toString()
{
	std::string sdp = "v=" + std::to_string(version) + "\r\n";
	sdp += origin->toString();
	sdp += sessionName->toString();
	if (!uri.empty())
		sdp += "u=" + uri + "\r\n";
	for (std::string email : emails)
		sdp += "e=" + email + "\r\n";
	for (std::string phone : phones)
		sdp += "p=" + phone + "\r\n";
	if (connection)
		sdp += connection->toString();
	for (auto time : times)
		sdp += time->toString();
	for (auto attr : attributes)
		sdp += attr->toString();
	for (auto media : medias)
		sdp += media->toString();
	return sdp;
}

std::vector<std::shared_ptr<Attribute>> SessionDescription::getAttributes()
{
	return attributes;
}

void SessionDescription::setAttributes(const std::vector<std::shared_ptr<Attribute>>& attributes)
{
	this->attributes = attributes;
}

std::shared_ptr<Connection> SessionDescription::getConnection()
{
	return connection;
}

void SessionDescription::setConnection(const std::shared_ptr<Connection>& connection)
{
	this->connection = connection;
}

std::vector<std::string> SessionDescription::getEmails()
{
	return emails;
}

void SessionDescription::setEmails(const std::vector<std::string>& emails)
{
	this->emails = emails;
}

std::shared_ptr<Information> SessionDescription::getInformation()
{
	return information;
}

void SessionDescription::setInformation(const std::shared_ptr<Information>& information)
{
	this->information = information;
}

std::shared_ptr<Key> SessionDescription::getKey()
{
	return key;
}

void SessionDescription::setKey(const std::shared_ptr<Key> key)
{
	this->key = key;
}

std::vector<std::shared_ptr<MediaDescription>> SessionDescription::getMedias()
{
	return medias;
}

void SessionDescription::setMedias(const std::vector<std::shared_ptr<MediaDescription>>& medias)
{
	this->medias = medias;
}

std::shared_ptr<Origin> SessionDescription::getOrigin()
{
	return origin;
}

void SessionDescription::setOrigin(const std::shared_ptr<Origin>& origin)
{
	this->origin = origin;
}

std::vector<std::string> SessionDescription::getPhones()
{
	return phones;
}

void SessionDescription::setPhones(const std::vector<std::string>& phones)
{
	this->phones = phones;
}

std::shared_ptr<SessionName> SessionDescription::getSessionName()
{
	return sessionName;
}

void SessionDescription::setSessionName(std::string sessionName)
{
	this->sessionName = std::make_shared<SessionName>(sessionName);
}

void SessionDescription::setSessionName(const std::shared_ptr<SessionName>& sessionName)
{
	this->sessionName = sessionName;
}

std::vector<std::shared_ptr<Time>> SessionDescription::getTimes()
{
	return times;
}

void SessionDescription::setTimes(const std::vector<std::shared_ptr<Time>>& times)
{
	this->times = times;
}

std::string SessionDescription::getUri()
{
	return uri;
}

void SessionDescription::setUri(const std::string& uri)
{
	this->uri = uri;
}

int SessionDescription::getVersion()
{
	return version;
}

void SessionDescription::setVersion(int version)
{
	this->version = version;
}

void SessionDescription::addEmail(const std::string& email)
{
	emails.push_back(email);
}

void SessionDescription::addPhone(const std::string& email)
{
	emails.push_back(email);
}

void SessionDescription::addBandwidth(const std::string& type, int bandwidth)
{
	addBandwidth(std::make_shared<Bandwidth>(type, bandwidth));
}

void SessionDescription::addBandwidth(const std::string& type, const std::string& bandwidth)
{
	addBandwidth(std::make_shared<Bandwidth>(type, bandwidth));
}

void SessionDescription::addBandwidth(const std::shared_ptr<Bandwidth>& bandwith)
{
	bandwidths.push_back(bandwith);
}

void SessionDescription::addMedia(const std::shared_ptr<MediaDescription>& media)
{
	medias.push_back(media);
}

void SessionDescription::addTime(const std::shared_ptr<Time>& time)
{
	times.push_back(time);
}

void SessionDescription::addAttribute(const std::shared_ptr<Attribute>& attr)
{
	attributes.push_back(attr);
}

std::vector<std::shared_ptr<Bandwidth>> SessionDescription::getBandwidths()
{
	return bandwidths;
}

void SessionDescription::setOrigin(const std::string& username, uint64_t sessId, uint64_t sessVersion, const std::string& nettype, const std::string& addrtype, const std::string& address)
{
	setOrigin(std::make_shared<Origin>(username, sessId, sessVersion, nettype, addrtype, address));
}

void SessionDescription::setOrigin(const std::string& username, int sessId, uint64_t sessVersion, const std::string& nettype, const std::string& addrtype, const std::string& address)
{
	setOrigin(std::make_shared<Origin>(username, sessId, sessVersion, nettype, addrtype, address));
}

void SessionDescription::setOrigin(const std::string& username, int sessId, int sessVersion, const std::string& nettype, const std::string& addrtype, const std::string& address)
{
	setOrigin(std::make_shared<Origin>(username, sessId, sessVersion, nettype, addrtype, address));
}

void SessionDescription::setConnection(const std::string& netType, const std::string& addrType, const std::string& address)
{
	setConnection(std::make_shared<Connection>(netType, addrType, address));
}

void SessionDescription::addTime(int start, int stop)
{
	addTime(std::make_shared<Time>(start, stop));
}

void SessionDescription::addAttribute(const std::string& attr)
{
	addAttribute(std::make_shared<BaseAttribute>(attr));
}

void SessionDescription::addAttribute(const std::string& attr, const std::string& value)
{
	addAttribute(std::make_shared<BaseAttribute>(attr, value));
}

MediaDescription::shared SessionDescription::getMedia(const std::string& type)
{
	for (auto media : medias)
		if (type == media->getMedia())
			return media;
	return nullptr;
}

MediaDescription::shared SessionDescription::getMediaById(const std::string& id)
{
	for (auto media : medias)
	{
		//Get mid attribute
		auto mid = media->getAttribute("mid");
		if (mid && id == mid->getValue())
			return media;
	}
		
	return nullptr;
}