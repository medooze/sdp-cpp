/* -----------------------------------------------------------------------------
 * Rule_ptp.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ptp_hpp
#define Rule_ptp_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ptp : public Rule
{
public:
  Rule_ptp(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ptp(const Rule_ptp& rule);

  Rule_ptp& operator=(const Rule_ptp& rule);

  virtual Rule* clone(void) const;

  static Rule_ptp* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
