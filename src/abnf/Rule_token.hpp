/* -----------------------------------------------------------------------------
 * Rule_token.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_token_hpp
#define Rule_token_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_token : public Rule
{
public:
  Rule_token(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_token(const Rule_token& rule);

  Rule_token& operator=(const Rule_token& rule);

  virtual Rule* clone(void) const;

  static Rule_token* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
