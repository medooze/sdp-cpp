/* -----------------------------------------------------------------------------
 * Rule_IPv6address.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_IPv6address_hpp
#define Rule_IPv6address_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_IPv6address : public Rule
{
public:
  Rule_IPv6address(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_IPv6address(const Rule_IPv6address& rule);

  Rule_IPv6address& operator=(const Rule_IPv6address& rule);

  const Rule_IPv6address* clone(void) const;

  static const Rule_IPv6address* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
