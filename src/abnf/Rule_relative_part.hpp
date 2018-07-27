/* -----------------------------------------------------------------------------
 * Rule_relative_part.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_relative_part_hpp
#define Rule_relative_part_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_relative_part : public Rule
{
public:
  Rule_relative_part(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_relative_part(const Rule_relative_part& rule);

  Rule_relative_part& operator=(const Rule_relative_part& rule);

  virtual Rule* clone(void) const;

  static Rule_relative_part* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
