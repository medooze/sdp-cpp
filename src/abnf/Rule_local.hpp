/* -----------------------------------------------------------------------------
 * Rule_local.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_local_hpp
#define Rule_local_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_local : public Rule
{
public:
  Rule_local(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_local(const Rule_local& rule);

  Rule_local& operator=(const Rule_local& rule);

  virtual Rule* clone(void) const;

  static Rule_local* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
