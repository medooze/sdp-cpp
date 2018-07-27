/* -----------------------------------------------------------------------------
 * Rule_previous_ssrc_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_previous_ssrc_attr_hpp
#define Rule_previous_ssrc_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_previous_ssrc_attr : public Rule
{
public:
  Rule_previous_ssrc_attr(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_previous_ssrc_attr(const Rule_previous_ssrc_attr& rule);

  Rule_previous_ssrc_attr& operator=(const Rule_previous_ssrc_attr& rule);

  virtual Rule* clone(void) const;

  static Rule_previous_ssrc_attr* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
