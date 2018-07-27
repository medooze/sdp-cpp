/* -----------------------------------------------------------------------------
 * Rule_ttl.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ttl_hpp
#define Rule_ttl_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ttl : public Rule
{
public:
  Rule_ttl(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ttl(const Rule_ttl& rule);

  Rule_ttl& operator=(const Rule_ttl& rule);

  virtual Rule* clone(void) const;

  static Rule_ttl* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
