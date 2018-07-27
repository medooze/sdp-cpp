/* -----------------------------------------------------------------------------
 * Rule_WSP.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_WSP_hpp
#define Rule_WSP_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_WSP : public Rule
{
public:
  Rule_WSP(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_WSP(const Rule_WSP& rule);

  Rule_WSP& operator=(const Rule_WSP& rule);

  virtual Rule* clone(void) const;

  static Rule_WSP* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
