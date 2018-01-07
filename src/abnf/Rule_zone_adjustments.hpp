/* -----------------------------------------------------------------------------
 * Rule_zone_adjustments.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_zone_adjustments_hpp
#define Rule_zone_adjustments_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_zone_adjustments : public Rule
{
public:
  Rule_zone_adjustments(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_zone_adjustments(const Rule_zone_adjustments& rule);

  Rule_zone_adjustments& operator=(const Rule_zone_adjustments& rule);

  const Rule_zone_adjustments* clone(void) const;

  static const Rule_zone_adjustments* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
