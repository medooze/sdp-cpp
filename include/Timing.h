#ifndef _SDP_TIME
#define _SDP_TIME

#include <string>

namespace sdp
{

class Time
{
public:
	using shared = std::shared_ptr<Time>;
public:
	Time() = default;

	Time(int start, int stop)
	{
		this->start = start;
		this->stop = stop;
	}

	virtual std::shared_ptr<Time> clone()
	{
		return std::make_shared<Time>(start, stop);
	}

	virtual std::string toString()
	{
		return "t=" + std::to_string(start) + " " + std::to_string(stop) + "\r\n";
	}

	int getStart()
	{
		return start;
	}

	void setStart(int start)
	{
		this->start = start;
	}

	int getStop()
	{
		return stop;
	}

	void setStop(int stop)
	{
		this->stop = stop;
	}

private:

	int start;
	int stop;

};

}
#endif