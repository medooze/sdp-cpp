/* -----------------------------------------------------------------------------
 * Rule_cname_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_cname_attr_hpp
#define Rule_cname_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_cname_attr : public Rule
{
public:
  Rule_cname_attr(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_cname_attr(const Rule_cname_attr& rule);

  Rule_cname_attr& operator=(const Rule_cname_attr& rule);

  virtual Rule* clone(void) const;

  static Rule_cname_attr* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
