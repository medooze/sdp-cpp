#ifndef _SDP_KEY_H_
#define _SDP_KEY_H_

namespace sdp
{
	
class Key
{
public:

	Key() = default;

	Key(std::string type, std::string key)
	{
		this->type = type;
		this->key = key;
	}

	std::shared_ptr<Key> clone()
	{
		return std::make_shared<Key>(type, key);
	}

	std::string toString()
	{
		return "k=" + (!key.empty() ? key + " " : "") + type + "\r\n";
	}

	std::string getKey()
	{
		return key;
	}

	void setKey(std::string key)
	{
		this->key = key;
	}

	std::string getType()
	{
		return type;
	}

	void setType(std::string type)
	{
		this->type = type;
	}

private:
	std::string type;
	std::string key;	
};

}
#endif
