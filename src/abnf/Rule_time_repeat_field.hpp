/* -----------------------------------------------------------------------------
 * Rule_time_repeat_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_time_repeat_field_hpp
#define Rule_time_repeat_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_time_repeat_field : public Rule
{
public:
  Rule_time_repeat_field(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_time_repeat_field(const Rule_time_repeat_field& rule);

  Rule_time_repeat_field& operator=(const Rule_time_repeat_field& rule);

  const Rule_time_repeat_field* clone(void) const;

  static const Rule_time_repeat_field* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
