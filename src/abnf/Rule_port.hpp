/* -----------------------------------------------------------------------------
 * Rule_port.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_port_hpp
#define Rule_port_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_port : public Rule
{
public:
  Rule_port(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_port(const Rule_port& rule);

  Rule_port& operator=(const Rule_port& rule);

  virtual Rule* clone(void) const;

  static Rule_port* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
