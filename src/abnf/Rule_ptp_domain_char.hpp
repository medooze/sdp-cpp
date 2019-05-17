/* -----------------------------------------------------------------------------
 * Rule_ptp_domain_char.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ptp_domain_char_hpp
#define Rule_ptp_domain_char_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ptp_domain_char : public Rule
{
public:
  Rule_ptp_domain_char(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ptp_domain_char(const Rule_ptp_domain_char& rule);

  Rule_ptp_domain_char& operator=(const Rule_ptp_domain_char& rule);

  virtual Rule* clone(void) const;

  static Rule_ptp_domain_char* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
