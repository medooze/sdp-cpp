/* -----------------------------------------------------------------------------
 * Rule_FQDN.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_FQDN_hpp
#define Rule_FQDN_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_FQDN : public Rule
{
public:
  Rule_FQDN(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_FQDN(const Rule_FQDN& rule);

  Rule_FQDN& operator=(const Rule_FQDN& rule);

  virtual Rule* clone(void) const;

  static Rule_FQDN* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
