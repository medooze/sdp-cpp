/* -----------------------------------------------------------------------------
 * Rule_EQUALS.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_EQUALS_hpp
#define Rule_EQUALS_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_EQUALS : public Rule
{
public:
  Rule_EQUALS(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_EQUALS(const Rule_EQUALS& rule);

  Rule_EQUALS& operator=(const Rule_EQUALS& rule);

  virtual Rule* clone(void) const;

  static Rule_EQUALS* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
