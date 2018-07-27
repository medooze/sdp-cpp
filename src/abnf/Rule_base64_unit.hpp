/* -----------------------------------------------------------------------------
 * Rule_base64_unit.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_base64_unit_hpp
#define Rule_base64_unit_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_base64_unit : public Rule
{
public:
  Rule_base64_unit(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_base64_unit(const Rule_base64_unit& rule);

  Rule_base64_unit& operator=(const Rule_base64_unit& rule);

  virtual Rule* clone(void) const;

  static Rule_base64_unit* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
