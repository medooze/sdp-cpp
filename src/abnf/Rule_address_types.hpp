/* -----------------------------------------------------------------------------
 * Rule_address_types.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_address_types_hpp
#define Rule_address_types_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_address_types : public Rule
{
public:
  Rule_address_types(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_address_types(const Rule_address_types& rule);

  Rule_address_types& operator=(const Rule_address_types& rule);

  virtual Rule* clone(void) const;

  static Rule_address_types* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
