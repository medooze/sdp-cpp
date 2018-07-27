/* -----------------------------------------------------------------------------
 * Rule_LWSP.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_LWSP_hpp
#define Rule_LWSP_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_LWSP : public Rule
{
public:
  Rule_LWSP(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_LWSP(const Rule_LWSP& rule);

  Rule_LWSP& operator=(const Rule_LWSP& rule);

  virtual Rule* clone(void) const;

  static Rule_LWSP* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
