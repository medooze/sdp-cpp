/* -----------------------------------------------------------------------------
 * Rule_phone.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_phone_hpp
#define Rule_phone_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_phone : public Rule
{
public:
  Rule_phone(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_phone(const Rule_phone& rule);

  Rule_phone& operator=(const Rule_phone& rule);

  virtual Rule* clone(void) const;

  static Rule_phone* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
