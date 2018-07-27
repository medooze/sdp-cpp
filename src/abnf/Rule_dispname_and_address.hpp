/* -----------------------------------------------------------------------------
 * Rule_dispname_and_address.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_dispname_and_address_hpp
#define Rule_dispname_and_address_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_dispname_and_address : public Rule
{
public:
  Rule_dispname_and_address(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_dispname_and_address(const Rule_dispname_and_address& rule);

  Rule_dispname_and_address& operator=(const Rule_dispname_and_address& rule);

  virtual Rule* clone(void) const;

  static Rule_dispname_and_address* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
