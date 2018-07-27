/* -----------------------------------------------------------------------------
 * Rule_local_part.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_local_part_hpp
#define Rule_local_part_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_local_part : public Rule
{
public:
  Rule_local_part(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_local_part(const Rule_local_part& rule);

  Rule_local_part& operator=(const Rule_local_part& rule);

  virtual Rule* clone(void) const;

  static Rule_local_part* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
