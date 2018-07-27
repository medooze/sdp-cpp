/* -----------------------------------------------------------------------------
 * Rule_LF.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_LF_hpp
#define Rule_LF_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_LF : public Rule
{
public:
  Rule_LF(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_LF(const Rule_LF& rule);

  Rule_LF& operator=(const Rule_LF& rule);

  virtual Rule* clone(void) const;

  static Rule_LF* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
