/* -----------------------------------------------------------------------------
 * Rule_hostport.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_hostport_hpp
#define Rule_hostport_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_hostport : public Rule
{
public:
  Rule_hostport(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_hostport(const Rule_hostport& rule);

  Rule_hostport& operator=(const Rule_hostport& rule);

  virtual Rule* clone(void) const;

  static Rule_hostport* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
