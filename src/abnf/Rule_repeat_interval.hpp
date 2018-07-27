/* -----------------------------------------------------------------------------
 * Rule_repeat_interval.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_repeat_interval_hpp
#define Rule_repeat_interval_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_repeat_interval : public Rule
{
public:
  Rule_repeat_interval(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_repeat_interval(const Rule_repeat_interval& rule);

  Rule_repeat_interval& operator=(const Rule_repeat_interval& rule);

  virtual Rule* clone(void) const;

  static Rule_repeat_interval* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
