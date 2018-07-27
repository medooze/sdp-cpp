/* -----------------------------------------------------------------------------
 * Rule_IPv4address.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_IPv4address_hpp
#define Rule_IPv4address_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_IPv4address : public Rule
{
public:
  Rule_IPv4address(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_IPv4address(const Rule_IPv4address& rule);

  Rule_IPv4address& operator=(const Rule_IPv4address& rule);

  virtual Rule* clone(void) const;

  static Rule_IPv4address* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
