#ifndef _SDP_FORMAT_ATTRIBUTE_H_
#define _SDP_FORMAT_ATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <memory>
#include <stack>

namespace sdp
{

class FormatAttribute :
	public Attribute
{
public:
	using shared = std::shared_ptr<FormatAttribute>;
public:
	FormatAttribute() = default;

	FormatAttribute(int fmt)
	{
		this->fmt = fmt;
	}

	FormatAttribute(int fmt, const std::string& parameters)
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
			if (params.empty())
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

	void setParameters(const std::string& parameters)
	{
		size_t size = parameters.length();
		size_t ini = 0;
		size_t sep = 0;
		size_t end = 0;
		
		//Clear parameters
		this->parameters.clear();
		
		//Tokenize
		while(end!=std::string::npos)
		{
			//Skip spaces
			while (ini<size && parameters[ini]==' ')
				++ini;
			//Check size
			if (ini==size)
				//All white
				break;
				
			//find param separator
			end = parameters.find(";", ini);
			
			//Get until separator or end of line
			sep = end!=std::string::npos ? end-1 : size-1;
			
			//Remove trailing spaces
			while (ini<sep && parameters[sep]==' ')
				--sep;
			
			//If it is not all white spaces
			if (ini!=sep)
			{
				std::string key;
				std::string val;
				
				//Find key-value separator
				size_t mid = parameters.find_first_of("=;",ini);

				//Check if it is <key,val> or just <key>
				if (mid<end && mid!=std::string::npos)
				{
					//Skip sepearator
					size_t kini = ini;
					size_t kend = mid-1;
					size_t vini = mid+1;
					size_t vend = sep;

					//Remove trailing spaces in key
					while (kini<kend && parameters[kend]==' ')
						--kend;
					
					//Remove leading spaces in value
					while (vini<vend && parameters[vini]==' ')
						++vini;
					
					//Get key and val
					key = parameters.substr(kini,kend-kini+1);
					val = parameters.substr(vini,vend-vini+1);
				} else {
					//Just key
					key = parameters.substr(ini,sep-ini+1);
				}
				//Add parameter
				addParameter(key,val);
			}
			
			//Move
			ini = end!=std::string::npos ? ++end : end;
		}
	}

	void addParameter(const std::string& parameter)
	{
		parameters[parameter] = "";
	}

	void addParameter(const std::string& key, const std::string& val)
	{
		parameters[key] = val;
	}

	void addParameter(const std::string& key, int val)
	{
		addParameter(key, std::to_string(val));
	}

	bool isEmpty()
	{
		return parameters.empty();
	}

private:
	int fmt = -1;
	//TODO: Maybe move to std::vector<std::pair<std::string,std::string> to keep order, or not.
	std::map<std::string, std::string> parameters;
};

}
#endif
