#ifndef _SDP_IMPL_MEDIA_DESCRIPTION_BUILDER_H_
#define _SDP_IMPL_MEDIA_DESCRIPTION_BUILDER_H_

#include "Builder.h"
#include "../../include/MediaDescription.h"

#include "AttributeBuilder.h"
#include "ConnectionBuilder.h"
#include "BandwitdhBuilder.h"
#include "InformationBuilder.h"
#include "KeyBuilder.h"

using namespace sdp;
using namespace abnf;


class MediaDescriptionBuilder :
	public Builder
{
private:
	MediaDescription* media;

public:
	virtual
	void* visit(Rule_media_description* rule)
	{
		//New object
		media = new MediaDescription();
		//Parse it
		Builder::visit(rule);
		//return media
		return media;
	}

	virtual
	void* visit(Rule_port* rule)
	{
		//Get port
		int port = std::stoi(rule->spelling);
		//Set it
		media->setPort(port);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_number_of_ports* rule)
	{
		//Get port
		int number = std::stoi(rule->spelling);
		//Set it
		media->setNumberOfPorts(number);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_proto* rule)
	{
		//Get protocol
		std::string proto = rule->spelling;
		//Set it
		media->setProtoString(proto);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_media* rule)
	{
		//Get media
		std::string name = rule->spelling;
		//Set it
		media->setMedia(name);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_fmt* rule)
	{
		//Get protocol
		std::string fmt = rule->spelling;
		//Set it
		media->addFormat(fmt);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_key_field* rule)
	{
		//Create builder
		KeyBuilder builder;
		//Generate it
		auto key = std::shared_ptr<Key>((Key*)builder.visit(rule));
		//Add it
		media->setKey(key);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_connection_field* rule)
	{
		//Create builder
		ConnectionBuilder builder;
		//Parse it
		auto connection = std::shared_ptr<Connection>((Connection*)builder.visit(rule));
		//Set it
		media->addConnection(connection);
		//Return connection
		return NULL;
	}

	virtual
	void* visit(Rule_bandwidth_field* rule)
	{
		//Create builder
		BandwitdhBuilder builder;
		//Generate it
		auto bandwidth = std::shared_ptr<Bandwidth>((Bandwidth*)builder.visit(rule));
		//Add it
		media->addBandwidth(bandwidth);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_information_field* rule)
	{
		//Create new session name
		InformationBuilder builder;
		//Generate
		auto info = std::shared_ptr<Information>((Information*)builder.visit(rule));
		//Set it
		media->setInformation(info);
		//Return it
		return NULL;
	}

	virtual
	void* visit(Rule_attribute_field* rule)
	{
		//Create new session name
		AttributeBuilder builder;
		//Generate
		auto attr = std::shared_ptr<Attribute>((Attribute*)builder.visit(rule));
		//Set it
		media->addAttribute(attr);
		//Return it
		return NULL;
	}
};

#endif
