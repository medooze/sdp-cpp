#ifndef _SDP_ATTRIBUTE_H_
#define _SDP_ATTRIBUTE_H_

#include <string>
#include <memory>

namespace sdp {
	
class Attribute 
{
public:
	using shared = std::shared_ptr<Attribute>;

public:
	virtual std::string toString() = 0;
	virtual std::shared_ptr<Attribute> clone() = 0;
	virtual std::string getField() = 0;
	virtual std::string getValue() = 0;
	virtual ~Attribute() = default;
};

}
#endif
 
 
