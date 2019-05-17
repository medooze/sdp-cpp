/* -----------------------------------------------------------------------------
 * Rule_ptp_domain_nmbr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ptp_domain_nmbr_hpp
#define Rule_ptp_domain_nmbr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ptp_domain_nmbr : public Rule
{
public:
  Rule_ptp_domain_nmbr(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ptp_domain_nmbr(const Rule_ptp_domain_nmbr& rule);

  Rule_ptp_domain_nmbr& operator=(const Rule_ptp_domain_nmbr& rule);

  virtual Rule* clone(void) const;

  static Rule_ptp_domain_nmbr* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
