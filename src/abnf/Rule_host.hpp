/* -----------------------------------------------------------------------------
 * Rule_host.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_host_hpp
#define Rule_host_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_host : public Rule
{
public:
  Rule_host(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_host(const Rule_host& rule);

  Rule_host& operator=(const Rule_host& rule);

  virtual Rule* clone(void) const;

  static Rule_host* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
