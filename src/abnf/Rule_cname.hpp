/* -----------------------------------------------------------------------------
 * Rule_cname.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_cname_hpp
#define Rule_cname_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_cname : public Rule
{
public:
  Rule_cname(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_cname(const Rule_cname& rule);

  Rule_cname& operator=(const Rule_cname& rule);

  virtual Rule* clone(void) const;

  static Rule_cname* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
