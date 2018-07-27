/* -----------------------------------------------------------------------------
 * Rule_scheme.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_scheme_hpp
#define Rule_scheme_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_scheme : public Rule
{
public:
  Rule_scheme(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_scheme(const Rule_scheme& rule);

  Rule_scheme& operator=(const Rule_scheme& rule);

  virtual Rule* clone(void) const;

  static Rule_scheme* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
