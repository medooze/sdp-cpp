/* -----------------------------------------------------------------------------
 * Rule_zone_adjustments.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
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
  Rule_zone_adjustments(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_zone_adjustments(const Rule_zone_adjustments& rule);

  Rule_zone_adjustments& operator=(const Rule_zone_adjustments& rule);

  virtual Rule* clone(void) const;

  static Rule_zone_adjustments* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
