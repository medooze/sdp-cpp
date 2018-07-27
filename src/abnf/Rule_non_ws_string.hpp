/* -----------------------------------------------------------------------------
 * Rule_non_ws_string.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_non_ws_string_hpp
#define Rule_non_ws_string_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_non_ws_string : public Rule
{
public:
  Rule_non_ws_string(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_non_ws_string(const Rule_non_ws_string& rule);

  Rule_non_ws_string& operator=(const Rule_non_ws_string& rule);

  virtual Rule* clone(void) const;

  static Rule_non_ws_string* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
