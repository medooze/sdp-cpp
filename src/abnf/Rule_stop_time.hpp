/* -----------------------------------------------------------------------------
 * Rule_stop_time.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_stop_time_hpp
#define Rule_stop_time_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_stop_time : public Rule
{
public:
  Rule_stop_time(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_stop_time(const Rule_stop_time& rule);

  Rule_stop_time& operator=(const Rule_stop_time& rule);

  virtual Rule* clone(void) const;

  static Rule_stop_time* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
