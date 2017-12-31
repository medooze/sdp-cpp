/* -----------------------------------------------------------------------------
 * Rule_IP6_multicast.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_IP6_multicast_hpp
#define Rule_IP6_multicast_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_IP6_multicast : public Rule
{
public:
  Rule_IP6_multicast(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_IP6_multicast(const Rule_IP6_multicast& rule);

  Rule_IP6_multicast& operator=(const Rule_IP6_multicast& rule);

  const Rule_IP6_multicast* clone(void) const;

  static const Rule_IP6_multicast* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
