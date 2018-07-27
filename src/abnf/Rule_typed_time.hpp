/* -----------------------------------------------------------------------------
 * Rule_typed_time.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_typed_time_hpp
#define Rule_typed_time_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_typed_time : public Rule
{
public:
  Rule_typed_time(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_typed_time(const Rule_typed_time& rule);

  Rule_typed_time& operator=(const Rule_typed_time& rule);

  virtual Rule* clone(void) const;

  static Rule_typed_time* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
