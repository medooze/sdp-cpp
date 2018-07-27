/* -----------------------------------------------------------------------------
 * Rule_text.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_text_hpp
#define Rule_text_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_text : public Rule
{
public:
  Rule_text(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_text(const Rule_text& rule);

  Rule_text& operator=(const Rule_text& rule);

  virtual Rule* clone(void) const;

  static Rule_text* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
