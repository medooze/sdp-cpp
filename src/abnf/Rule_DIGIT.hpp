/* -----------------------------------------------------------------------------
 * Rule_DIGIT.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_DIGIT_hpp
#define Rule_DIGIT_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_DIGIT : public Rule
{
public:
  Rule_DIGIT(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_DIGIT(const Rule_DIGIT& rule);

  Rule_DIGIT& operator=(const Rule_DIGIT& rule);

  virtual Rule* clone(void) const;

  static Rule_DIGIT* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
