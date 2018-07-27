/* -----------------------------------------------------------------------------
 * Rule_foundation.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_foundation_hpp
#define Rule_foundation_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_foundation : public Rule
{
public:
  Rule_foundation(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_foundation(const Rule_foundation& rule);

  Rule_foundation& operator=(const Rule_foundation& rule);

  virtual Rule* clone(void) const;

  static Rule_foundation* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
