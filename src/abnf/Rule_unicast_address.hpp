/* -----------------------------------------------------------------------------
 * Rule_unicast_address.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_unicast_address_hpp
#define Rule_unicast_address_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_unicast_address : public Rule
{
public:
  Rule_unicast_address(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_unicast_address(const Rule_unicast_address& rule);

  Rule_unicast_address& operator=(const Rule_unicast_address& rule);

  virtual Rule* clone(void) const;

  static Rule_unicast_address* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
