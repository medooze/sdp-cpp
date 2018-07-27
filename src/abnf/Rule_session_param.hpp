/* -----------------------------------------------------------------------------
 * Rule_session_param.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_session_param_hpp
#define Rule_session_param_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_session_param : public Rule
{
public:
  Rule_session_param(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_session_param(const Rule_session_param& rule);

  Rule_session_param& operator=(const Rule_session_param& rule);

  virtual Rule* clone(void) const;

  static Rule_session_param* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
