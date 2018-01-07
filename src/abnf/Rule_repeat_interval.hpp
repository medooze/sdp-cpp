/* -----------------------------------------------------------------------------
 * Rule_repeat_interval.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_repeat_interval_hpp
#define Rule_repeat_interval_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_repeat_interval : public Rule
{
public:
  Rule_repeat_interval(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_repeat_interval(const Rule_repeat_interval& rule);

  Rule_repeat_interval& operator=(const Rule_repeat_interval& rule);

  const Rule_repeat_interval* clone(void) const;

  static const Rule_repeat_interval* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
