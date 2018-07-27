/* -----------------------------------------------------------------------------
 * Rule_alpha_numeric.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_alpha_numeric_hpp
#define Rule_alpha_numeric_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_alpha_numeric : public Rule
{
public:
  Rule_alpha_numeric(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_alpha_numeric(const Rule_alpha_numeric& rule);

  Rule_alpha_numeric& operator=(const Rule_alpha_numeric& rule);

  virtual Rule* clone(void) const;

  static Rule_alpha_numeric* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
