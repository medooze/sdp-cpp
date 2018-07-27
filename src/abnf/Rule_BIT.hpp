/* -----------------------------------------------------------------------------
 * Rule_BIT.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_BIT_hpp
#define Rule_BIT_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_BIT : public Rule
{
public:
  Rule_BIT(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_BIT(const Rule_BIT& rule);

  Rule_BIT& operator=(const Rule_BIT& rule);

  virtual Rule* clone(void) const;

  static Rule_BIT* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
