/* -----------------------------------------------------------------------------
 * Rule_unicast_address.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_unicast_address_hpp
#define Rule_unicast_address_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_unicast_address : public Rule
{
public:
  Rule_unicast_address(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_unicast_address(const Rule_unicast_address& rule);

  Rule_unicast_address& operator=(const Rule_unicast_address& rule);

  const Rule_unicast_address* clone(void) const;

  static const Rule_unicast_address* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
