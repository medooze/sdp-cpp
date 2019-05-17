/* -----------------------------------------------------------------------------
 * Rule_ptp_version.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ptp_version_hpp
#define Rule_ptp_version_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ptp_version : public Rule
{
public:
  Rule_ptp_version(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ptp_version(const Rule_ptp_version& rule);

  Rule_ptp_version& operator=(const Rule_ptp_version& rule);

  virtual Rule* clone(void) const;

  static Rule_ptp_version* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
