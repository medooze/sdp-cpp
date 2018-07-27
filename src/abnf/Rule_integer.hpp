/* -----------------------------------------------------------------------------
 * Rule_integer.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_integer_hpp
#define Rule_integer_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_integer : public Rule
{
public:
  Rule_integer(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_integer(const Rule_integer& rule);

  Rule_integer& operator=(const Rule_integer& rule);

  virtual Rule* clone(void) const;

  static Rule_integer* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
