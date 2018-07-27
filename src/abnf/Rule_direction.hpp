/* -----------------------------------------------------------------------------
 * Rule_direction.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_direction_hpp
#define Rule_direction_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_direction : public Rule
{
public:
  Rule_direction(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_direction(const Rule_direction& rule);

  Rule_direction& operator=(const Rule_direction& rule);

  virtual Rule* clone(void) const;

  static Rule_direction* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
