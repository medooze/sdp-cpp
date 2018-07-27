/* -----------------------------------------------------------------------------
 * Rule_fragment.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_fragment_hpp
#define Rule_fragment_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_fragment : public Rule
{
public:
  Rule_fragment(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_fragment(const Rule_fragment& rule);

  Rule_fragment& operator=(const Rule_fragment& rule);

  virtual Rule* clone(void) const;

  static Rule_fragment* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
