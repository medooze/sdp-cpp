/* -----------------------------------------------------------------------------
 * Rule_connection_address.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_connection_address_hpp
#define Rule_connection_address_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_connection_address : public Rule
{
public:
  Rule_connection_address(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_connection_address(const Rule_connection_address& rule);

  Rule_connection_address& operator=(const Rule_connection_address& rule);

  const Rule_connection_address* clone(void) const;

  static const Rule_connection_address* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
