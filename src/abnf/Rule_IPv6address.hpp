/* -----------------------------------------------------------------------------
 * Rule_IPv6address.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_IPv6address_hpp
#define Rule_IPv6address_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_IPv6address : public Rule
{
public:
  Rule_IPv6address(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_IPv6address(const Rule_IPv6address& rule);

  Rule_IPv6address& operator=(const Rule_IPv6address& rule);

  virtual Rule* clone(void) const;

  static Rule_IPv6address* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
