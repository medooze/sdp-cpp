/* -----------------------------------------------------------------------------
 * Rule_DQUOTE.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_DQUOTE_hpp
#define Rule_DQUOTE_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_DQUOTE : public Rule
{
public:
  Rule_DQUOTE(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_DQUOTE(const Rule_DQUOTE& rule);

  Rule_DQUOTE& operator=(const Rule_DQUOTE& rule);

  virtual Rule* clone(void) const;

  static Rule_DQUOTE* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
