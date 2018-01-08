/* -----------------------------------------------------------------------------
 * Rule_transport.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_transport_hpp
#define Rule_transport_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_transport : public Rule
{
public:
  Rule_transport(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_transport(const Rule_transport& rule);

  Rule_transport& operator=(const Rule_transport& rule);

  const Rule_transport* clone(void) const;

  static const Rule_transport* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
