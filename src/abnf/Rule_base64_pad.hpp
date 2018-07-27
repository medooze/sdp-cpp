/* -----------------------------------------------------------------------------
 * Rule_base64_pad.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_base64_pad_hpp
#define Rule_base64_pad_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_base64_pad : public Rule
{
public:
  Rule_base64_pad(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_base64_pad(const Rule_base64_pad& rule);

  Rule_base64_pad& operator=(const Rule_base64_pad& rule);

  virtual Rule* clone(void) const;

  static Rule_base64_pad* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
