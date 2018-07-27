/* -----------------------------------------------------------------------------
 * Rule_SP.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_SP_hpp
#define Rule_SP_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_SP : public Rule
{
public:
  Rule_SP(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_SP(const Rule_SP& rule);

  Rule_SP& operator=(const Rule_SP& rule);

  virtual Rule* clone(void) const;

  static Rule_SP* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
