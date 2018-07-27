/* -----------------------------------------------------------------------------
 * Rule_fixed_len_time_unit.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_fixed_len_time_unit_hpp
#define Rule_fixed_len_time_unit_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_fixed_len_time_unit : public Rule
{
public:
  Rule_fixed_len_time_unit(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_fixed_len_time_unit(const Rule_fixed_len_time_unit& rule);

  Rule_fixed_len_time_unit& operator=(const Rule_fixed_len_time_unit& rule);

  virtual Rule* clone(void) const;

  static Rule_fixed_len_time_unit* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
