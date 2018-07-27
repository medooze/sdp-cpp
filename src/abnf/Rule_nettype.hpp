/* -----------------------------------------------------------------------------
 * Rule_nettype.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_nettype_hpp
#define Rule_nettype_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_nettype : public Rule
{
public:
  Rule_nettype(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_nettype(const Rule_nettype& rule);

  Rule_nettype& operator=(const Rule_nettype& rule);

  virtual Rule* clone(void) const;

  static Rule_nettype* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
