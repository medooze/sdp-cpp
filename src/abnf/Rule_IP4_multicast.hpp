/* -----------------------------------------------------------------------------
 * Rule_IP4_multicast.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_IP4_multicast_hpp
#define Rule_IP4_multicast_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_IP4_multicast : public Rule
{
public:
  Rule_IP4_multicast(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_IP4_multicast(const Rule_IP4_multicast& rule);

  Rule_IP4_multicast& operator=(const Rule_IP4_multicast& rule);

  const Rule_IP4_multicast* clone(void) const;

  static const Rule_IP4_multicast* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
