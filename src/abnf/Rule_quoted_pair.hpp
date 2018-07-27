/* -----------------------------------------------------------------------------
 * Rule_quoted_pair.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_quoted_pair_hpp
#define Rule_quoted_pair_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_quoted_pair : public Rule
{
public:
  Rule_quoted_pair(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_quoted_pair(const Rule_quoted_pair& rule);

  Rule_quoted_pair& operator=(const Rule_quoted_pair& rule);

  virtual Rule* clone(void) const;

  static Rule_quoted_pair* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
