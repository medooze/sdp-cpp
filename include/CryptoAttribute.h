#ifndef _SDP_CRYPTO_ATTRIBUTE_H_
#define _SDP_CRYPTO_ATTRIBUTE_H_

#include <string>
#include <vector>

#include "Attribute.h"

namespace sdp
{

class CryptoAttribute :
	public Attribute
{
public:
	using shared = std::shared_ptr<CryptoAttribute>;
public:

	class KeyParam
	{
	public:
		KeyParam() = default;

		KeyParam(const std::string& method, const std::string& info)
		{
			this->method = method;
			this->info = info;
		}

		std::shared_ptr<KeyParam> clone()
		{
			return std::make_shared<KeyParam>(method, info);
		}

		std::string getInfo()
		{
			return info;
		}

		void setInfo(const std::string& info)
		{
			this->info = info;
		}

		std::string getMethod()
		{
			return method;
		}

		void setMethod(const std::string& method)
		{
			this->method = method;
		}
	private:
		friend class CryptoAttribute;
		std::string method;
		std::string info;

	};

public:
	CryptoAttribute() = default;
	virtual ~CryptoAttribute() = default;

	CryptoAttribute(int tag, const std::string& suite, const std::vector<std::shared_ptr<KeyParam>>& keyParams, const std::string& sessionParams)
	{
		this->tag = tag;
		this->suite = suite;
		this->keyParams = keyParams;
		this->sessionParams = sessionParams;
	}

	CryptoAttribute(int tag, const std::string& suite, const std::string& method, const std::string& info, const std::string& sessionParams)
	{
		this->tag = tag;
		this->suite = suite;
		this->keyParams.push_back(std::make_shared<KeyParam>(method, info));
		this->sessionParams = sessionParams;
	}

	CryptoAttribute(int tag, const std::string& suite, const std::string& method, const std::string& info)
	{
		this->tag = tag;
		this->suite = suite;
		this->keyParams.push_back(std::make_shared<KeyParam>(method, info));
	}

	virtual std::shared_ptr<Attribute> clone() override
	{
		//Clne key params
		std::vector<std::shared_ptr<KeyParam>> clonedKeyParams;
		//Add each param
		for (auto param : keyParams)
			//Add it
			clonedKeyParams.push_back(param->clone());
		//return the cloenda attr
		return std::make_shared<CryptoAttribute>(tag, suite, clonedKeyParams, sessionParams);
	}

	virtual std::string getField() override
	{
		return "crypto";
	}

	virtual std::string getValue() override
	{
		bool first = true;
		std::string value = std::to_string(tag) + " " + suite + " ";
		for (auto param : keyParams)
		{
			if (first)
				first = false;
			else
				value += ";";
			value += param->method + ":" + param->info;

		}
		if (!sessionParams.empty())
			value += " " + sessionParams;
		return value;
	}

	virtual std::string toString()
	{
		//Get value
		std::string value = getValue();
		//Generic attr
		return "a=" + getField() + (!value.empty() ? ":" + value : "") + "\r\n";
	}

	std::vector<std::shared_ptr<KeyParam>> getKeyParams()
	{
		return keyParams;
	}

	void addKeyParam(const std::shared_ptr<KeyParam> param)
	{
		keyParams.push_back(param);
	}

	void setKeyParams(const std::vector<std::shared_ptr<KeyParam>>& keyParams)
	{
		this->keyParams = keyParams;
	}

	std::string getSessionParams()
	{
		return sessionParams;
	}

	void setSessionParams(const std::string& sessionParams)
	{
		this->sessionParams = sessionParams;
	}

	std::string getSuite()
	{
		return suite;
	}

	void setSuite(const std::string& suite)
	{
		this->suite = suite;
	}

	int getTag()
	{
		return tag;
	}

	void setTag(int tag)
	{
		this->tag = tag;
	}

	std::shared_ptr<KeyParam> getFirstKeyParam()
	{
		return keyParams.front();
	}

private:
	int tag = 0;
	std::string suite;
	std::vector<std::shared_ptr<KeyParam>> keyParams;
	std::string sessionParams;
};

}
#endif
