/* -----------------------------------------------------------------------------
 * Rule_mid_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_mid_attr_hpp
#define Rule_mid_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_mid_attr : public Rule
{
public:
  Rule_mid_attr(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_mid_attr(const Rule_mid_attr& rule);

  Rule_mid_attr& operator=(const Rule_mid_attr& rule);

  virtual Rule* clone(void) const;

  static Rule_mid_attr* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
