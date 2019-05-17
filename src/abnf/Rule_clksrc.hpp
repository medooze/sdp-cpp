/* -----------------------------------------------------------------------------
 * Rule_clksrc.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_clksrc_hpp
#define Rule_clksrc_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_clksrc : public Rule
{
public:
  Rule_clksrc(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_clksrc(const Rule_clksrc& rule);

  Rule_clksrc& operator=(const Rule_clksrc& rule);

  virtual Rule* clone(void) const;

  static Rule_clksrc* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
