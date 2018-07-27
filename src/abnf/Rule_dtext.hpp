/* -----------------------------------------------------------------------------
 * Rule_dtext.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_dtext_hpp
#define Rule_dtext_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_dtext : public Rule
{
public:
  Rule_dtext(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_dtext(const Rule_dtext& rule);

  Rule_dtext& operator=(const Rule_dtext& rule);

  virtual Rule* clone(void) const;

  static Rule_dtext* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
