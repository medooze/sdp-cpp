/* -----------------------------------------------------------------------------
 * Rule_group_semantics.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_group_semantics_hpp
#define Rule_group_semantics_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_group_semantics : public Rule
{
public:
  Rule_group_semantics(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_group_semantics(const Rule_group_semantics& rule);

  Rule_group_semantics& operator=(const Rule_group_semantics& rule);

  virtual Rule* clone(void) const;

  static Rule_group_semantics* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
