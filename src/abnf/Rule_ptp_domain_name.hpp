/* -----------------------------------------------------------------------------
 * Rule_ptp_domain_name.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ptp_domain_name_hpp
#define Rule_ptp_domain_name_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ptp_domain_name : public Rule
{
public:
  Rule_ptp_domain_name(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ptp_domain_name(const Rule_ptp_domain_name& rule);

  Rule_ptp_domain_name& operator=(const Rule_ptp_domain_name& rule);

  virtual Rule* clone(void) const;

  static Rule_ptp_domain_name* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
