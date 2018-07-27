/* -----------------------------------------------------------------------------
 * Rule_IP6_multicast.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
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
  Rule_IP6_multicast(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_IP6_multicast(const Rule_IP6_multicast& rule);

  Rule_IP6_multicast& operator=(const Rule_IP6_multicast& rule);

  virtual Rule* clone(void) const;

  static Rule_IP6_multicast* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
