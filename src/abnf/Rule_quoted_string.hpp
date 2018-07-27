/* -----------------------------------------------------------------------------
 * Rule_quoted_string.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_quoted_string_hpp
#define Rule_quoted_string_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_quoted_string : public Rule
{
public:
  Rule_quoted_string(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_quoted_string(const Rule_quoted_string& rule);

  Rule_quoted_string& operator=(const Rule_quoted_string& rule);

  virtual Rule* clone(void) const;

  static Rule_quoted_string* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
