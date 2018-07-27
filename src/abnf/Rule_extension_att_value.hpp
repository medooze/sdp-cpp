/* -----------------------------------------------------------------------------
 * Rule_extension_att_value.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_extension_att_value_hpp
#define Rule_extension_att_value_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_extension_att_value : public Rule
{
public:
  Rule_extension_att_value(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_extension_att_value(const Rule_extension_att_value& rule);

  Rule_extension_att_value& operator=(const Rule_extension_att_value& rule);

  virtual Rule* clone(void) const;

  static Rule_extension_att_value* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
