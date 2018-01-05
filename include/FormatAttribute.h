#ifndef _SDP_FORMAT_ATTRIBUTE_H_
#define _SDP_FORMAT_ATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <memory>

namespace sdp
{

class FormatAttribute :
	public Attribute
{
public:
	FormatAttribute() = default;

	FormatAttribute(int fmt)
	{
		this->fmt = fmt;
	}

	FormatAttribute(int fmt, std::string parameters)
	{
		this->fmt = fmt;
		//Set them
		setParameters(parameters);
	}
	~FormatAttribute() = default;

	virtual std::shared_ptr<Attribute> clone() override
	{
		//Clone it
		auto cloned = std::make_shared<FormatAttribute>(fmt);
		//Add parameters
		for (auto param : parameters)
			//Add it to clone
			cloned->addParameter(param.first, param.second);
		//Return cloned one
		return cloned;
	}

	virtual std::string getField() override
	{
		return "fmtp";
	}

	virtual std::string getValue() override
	{
		std::string params = "";
		//For each parameter
		for (auto param : parameters)
		{
			//Add param
			if (param.first.empty())
				params += " " + param.first;
			else
				params += "; " + param.first;
			//If got value
			if (!param.second.empty())
				//Append it
				params += "=" + param.second;
		}
		//Done
		return std::to_string(fmt) + params;
	}

	virtual std::string toString() override
	{
		//Get value
		std::string value = getValue();
		//Generic attr
		return "a=" + getField() + (!value.empty() ? ":" + value : "") + "\r\n";
	}

	int getFmt()
	{
		return fmt;
	}

	void setFmt(int fmt)
	{
		this->fmt = fmt;
	}

	std::map<std::string, std::string> getParameters()
	{
		return parameters;
	}

	void setParameters(std::string parameters)
	{
		/*TODO:!!/
		//Split by ;
		for (std::string param : parameters.split(";"))
		{
			//Remove spaces, and split by =
			std::string[] vals = param.trim().split("=");
			//Add to map
			this->parameters.put(vals[0].trim(), vals.length > 1 ? vals[1].trim() : null);
		}
		
		size_t i = 0;
		for (auto pos=parameters.find(";"); pos!=std::string::npos; i=++pos)
		{
			//Add proto
			this->parameters.push_back(parameters.substr(i, pos - i));
			//find next
			pos = parameters.find("/", pos);
			//If last
			if (pos==std::string::npos)
				this->parameters.push_back(parameters.substr(i, parameters.length()));
		}
		 * */
	}

	void addParameter(std::string parameter)
	{
		parameters[parameter] = "";
	}

	void addParameter(std::string key, std::string val)
	{
		parameters[key] = val;
	}

	void addParameter(std::string key, int val)
	{
		addParameter(key, std::to_string(val));
	}

	bool isEmpty()
	{
		return parameters.empty();
	}

private:
	int fmt = -1;
	std::map<std::string, std::string> parameters;
};

}
#endif
