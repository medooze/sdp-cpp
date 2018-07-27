/* -----------------------------------------------------------------------------
 * Rule_username.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_username_hpp
#define Rule_username_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_username : public Rule
{
public:
  Rule_username(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_username(const Rule_username& rule);

  Rule_username& operator=(const Rule_username& rule);

  virtual Rule* clone(void) const;

  static Rule_username* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
