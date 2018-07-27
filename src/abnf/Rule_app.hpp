/* -----------------------------------------------------------------------------
 * Rule_app.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_app_hpp
#define Rule_app_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_app : public Rule
{
public:
  Rule_app(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_app(const Rule_app& rule);

  Rule_app& operator=(const Rule_app& rule);

  virtual Rule* clone(void) const;

  static Rule_app* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
