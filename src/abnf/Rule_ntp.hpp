/* -----------------------------------------------------------------------------
 * Rule_ntp.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ntp_hpp
#define Rule_ntp_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ntp : public Rule
{
public:
  Rule_ntp(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ntp(const Rule_ntp& rule);

  Rule_ntp& operator=(const Rule_ntp& rule);

  virtual Rule* clone(void) const;

  static Rule_ntp* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
