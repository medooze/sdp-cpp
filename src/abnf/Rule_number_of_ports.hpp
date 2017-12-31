/* -----------------------------------------------------------------------------
 * Rule_number_of_ports.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
  Rule_number_of_ports(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_number_of_ports(const Rule_number_of_ports& rule);

  Rule_number_of_ports& operator=(const Rule_number_of_ports& rule);

  const Rule_number_of_ports* clone(void) const;

  static const Rule_number_of_ports* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
