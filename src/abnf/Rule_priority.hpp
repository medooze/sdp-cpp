/* -----------------------------------------------------------------------------
 * Rule_priority.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_priority_hpp
#define Rule_priority_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_priority : public Rule
{
public:
  Rule_priority(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_priority(const Rule_priority& rule);

  Rule_priority& operator=(const Rule_priority& rule);

  virtual Rule* clone(void) const;

  static Rule_priority* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
