/* -----------------------------------------------------------------------------
 * Rule_CTL.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_CTL_hpp
#define Rule_CTL_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_CTL : public Rule
{
public:
  Rule_CTL(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_CTL(const Rule_CTL& rule);

  Rule_CTL& operator=(const Rule_CTL& rule);

  virtual Rule* clone(void) const;

  static Rule_CTL* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
