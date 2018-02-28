#ifndef _SDP_INFORMATION_H_
#define _SDP_INFORMATION_H_

#include <string>
#include <memory>

namespace sdp
{

class Information
{
public:
	using shared = std::shared_ptr<Information>;
public:
	Information() = default;

	Information(const std::string& text)
	{
		this->text = text;
	}

	std::shared_ptr<Information> clone()
	{
		return std::make_shared<Information>(text);
	}

	std::string toString()
	{
		return "i=" + text + "\r\n";
	}

	std::string getText()
	{
		return text;
	}

	void setText(std::string text)
	{
		this->text = text;
	}

private:
	std::string text;
};

}
#endif
