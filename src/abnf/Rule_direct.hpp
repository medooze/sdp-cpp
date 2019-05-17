/* -----------------------------------------------------------------------------
 * Rule_direct.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_direct_hpp
#define Rule_direct_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_direct : public Rule
{
public:
  Rule_direct(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_direct(const Rule_direct& rule);

  Rule_direct& operator=(const Rule_direct& rule);

  virtual Rule* clone(void) const;

  static Rule_direct* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
