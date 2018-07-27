/* -----------------------------------------------------------------------------
 * Rule_number_of_ports.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_number_of_ports_hpp
#define Rule_number_of_ports_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_number_of_ports : public Rule
{
public:
  Rule_number_of_ports(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_number_of_ports(const Rule_number_of_ports& rule);

  Rule_number_of_ports& operator=(const Rule_number_of_ports& rule);

  virtual Rule* clone(void) const;

  static Rule_number_of_ports* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
