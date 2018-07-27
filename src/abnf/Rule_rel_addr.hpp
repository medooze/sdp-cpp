/* -----------------------------------------------------------------------------
 * Rule_rel_addr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_rel_addr_hpp
#define Rule_rel_addr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_rel_addr : public Rule
{
public:
  Rule_rel_addr(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_rel_addr(const Rule_rel_addr& rule);

  Rule_rel_addr& operator=(const Rule_rel_addr& rule);

  virtual Rule* clone(void) const;

  static Rule_rel_addr* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
