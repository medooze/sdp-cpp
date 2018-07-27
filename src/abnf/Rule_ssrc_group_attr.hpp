/* -----------------------------------------------------------------------------
 * Rule_ssrc_group_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ssrc_group_attr_hpp
#define Rule_ssrc_group_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ssrc_group_attr : public Rule
{
public:
  Rule_ssrc_group_attr(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ssrc_group_attr(const Rule_ssrc_group_attr& rule);

  Rule_ssrc_group_attr& operator=(const Rule_ssrc_group_attr& rule);

  virtual Rule* clone(void) const;

  static Rule_ssrc_group_attr* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
