/* -----------------------------------------------------------------------------
 * Rule_private.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_private_hpp
#define Rule_private_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_private : public Rule
{
public:
  Rule_private(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_private(const Rule_private& rule);

  Rule_private& operator=(const Rule_private& rule);

  virtual Rule* clone(void) const;

  static Rule_private* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
