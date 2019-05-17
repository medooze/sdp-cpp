/* -----------------------------------------------------------------------------
 * Rule_gps.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_gps_hpp
#define Rule_gps_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_gps : public Rule
{
public:
  Rule_gps(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_gps(const Rule_gps& rule);

  Rule_gps& operator=(const Rule_gps& rule);

  virtual Rule* clone(void) const;

  static Rule_gps* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
