/* -----------------------------------------------------------------------------
 * Rule_userinfo.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_userinfo_hpp
#define Rule_userinfo_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_userinfo : public Rule
{
public:
  Rule_userinfo(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_userinfo(const Rule_userinfo& rule);

  Rule_userinfo& operator=(const Rule_userinfo& rule);

  virtual Rule* clone(void) const;

  static Rule_userinfo* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
