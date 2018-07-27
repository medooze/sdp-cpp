/* -----------------------------------------------------------------------------
 * Rule_addrtype.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_addrtype_hpp
#define Rule_addrtype_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_addrtype : public Rule
{
public:
  Rule_addrtype(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_addrtype(const Rule_addrtype& rule);

  Rule_addrtype& operator=(const Rule_addrtype& rule);

  virtual Rule* clone(void) const;

  static Rule_addrtype* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
