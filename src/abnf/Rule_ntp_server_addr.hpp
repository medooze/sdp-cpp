/* -----------------------------------------------------------------------------
 * Rule_ntp_server_addr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ntp_server_addr_hpp
#define Rule_ntp_server_addr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ntp_server_addr : public Rule
{
public:
  Rule_ntp_server_addr(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ntp_server_addr(const Rule_ntp_server_addr& rule);

  Rule_ntp_server_addr& operator=(const Rule_ntp_server_addr& rule);

  virtual Rule* clone(void) const;

  static Rule_ntp_server_addr* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
