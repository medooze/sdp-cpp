#ifndef _SDP_SCTP_ATTRIBUTE_H_
#define _SDP_SCTP_ATTRIBUTE_H_

#include "Attribute.h"

namespace sdp
{
class SCTPMapAttribute :
	public Attribute
{
public:
	using shared = std::shared_ptr<SCTPMapAttribute>;
public:

	SCTPMapAttribute() = default;

	SCTPMapAttribute(int number, const std::string& app, int streams)
	{
		this->number = number;
		this->app = app;
		this->streams = streams;
	}
	virtual ~SCTPMapAttribute() = default;

	virtual std::shared_ptr<Attribute> clone() override
	{
		return std::make_shared<SCTPMapAttribute>(number, app, streams);
	}

	virtual	std::string getField() override
	{
		return "sctpmap";
	}

	virtual	std::string getValue() override
	{

		std::string value = std::to_string(number) + " " + app;

		if (streams>0)
			value += " " + std::to_string(streams);

		return value;
	}

	virtual	std::string toString() override
	{
		//Get value
		std::string value = getValue();
		//Generic attr
		return "a=" + getField() + (!value.empty() ? ":" + value : "") + "\r\n";
	}

	int getNumber()
	{
		return number;
	}

	void setNumber(int number)
	{
		this->number = number;
	}

	std::string getApp()
	{
		return app;
	}

	void setApp(const std::string& app)
	{
		this->app = app;
	}

	int getStreams()
	{
		return streams;
	}

	void setStreams(int streams)
	{
		this->streams = streams;
	}
	
private:	
	int number = 0;
	std::string app;
	int streams = 0;
};

}
#endif
