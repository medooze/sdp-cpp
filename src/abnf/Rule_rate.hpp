/* -----------------------------------------------------------------------------
 * Rule_rate.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_rate_hpp
#define Rule_rate_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_rate : public Rule
{
public:
  Rule_rate(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_rate(const Rule_rate& rule);

  Rule_rate& operator=(const Rule_rate& rule);

  virtual Rule* clone(void) const;

  static Rule_rate* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
