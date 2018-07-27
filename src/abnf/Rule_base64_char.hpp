/* -----------------------------------------------------------------------------
 * Rule_base64_char.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_base64_char_hpp
#define Rule_base64_char_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_base64_char : public Rule
{
public:
  Rule_base64_char(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_base64_char(const Rule_base64_char& rule);

  Rule_base64_char& operator=(const Rule_base64_char& rule);

  virtual Rule* clone(void) const;

  static Rule_base64_char* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
