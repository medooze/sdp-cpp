/* -----------------------------------------------------------------------------
 * Rule_fmtp_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_fmtp_attr_hpp
#define Rule_fmtp_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_fmtp_attr : public Rule
{
public:
  Rule_fmtp_attr(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_fmtp_attr(const Rule_fmtp_attr& rule);

  Rule_fmtp_attr& operator=(const Rule_fmtp_attr& rule);

  virtual Rule* clone(void) const;

  static Rule_fmtp_attr* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
