/* -----------------------------------------------------------------------------
 * Rule_m1.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_m1_hpp
#define Rule_m1_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_m1 : public Rule
{
public:
  Rule_m1(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_m1(const Rule_m1& rule);

  Rule_m1& operator=(const Rule_m1& rule);

  virtual Rule* clone(void) const;

  static Rule_m1* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
