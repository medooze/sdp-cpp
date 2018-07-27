/* -----------------------------------------------------------------------------
 * Rule_transport_extension.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_transport_extension_hpp
#define Rule_transport_extension_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_transport_extension : public Rule
{
public:
  Rule_transport_extension(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_transport_extension(const Rule_transport_extension& rule);

  Rule_transport_extension& operator=(const Rule_transport_extension& rule);

  virtual Rule* clone(void) const;

  static Rule_transport_extension* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
