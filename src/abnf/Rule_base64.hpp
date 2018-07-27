/* -----------------------------------------------------------------------------
 * Rule_base64.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_base64_hpp
#define Rule_base64_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_base64 : public Rule
{
public:
  Rule_base64(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_base64(const Rule_base64& rule);

  Rule_base64& operator=(const Rule_base64& rule);

  virtual Rule* clone(void) const;

  static Rule_base64* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
