/* -----------------------------------------------------------------------------
 * Rule_fixed_len_time_unit.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
  Rule_fixed_len_time_unit(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_fixed_len_time_unit(const Rule_fixed_len_time_unit& rule);

  Rule_fixed_len_time_unit& operator=(const Rule_fixed_len_time_unit& rule);

  const Rule_fixed_len_time_unit* clone(void) const;

  static const Rule_fixed_len_time_unit* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
