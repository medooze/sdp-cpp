/* -----------------------------------------------------------------------------
 * Rule_extension_att.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_extension_att_hpp
#define Rule_extension_att_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_extension_att : public Rule
{
public:
  Rule_extension_att(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_extension_att(const Rule_extension_att& rule);

  Rule_extension_att& operator=(const Rule_extension_att& rule);

  virtual Rule* clone(void) const;

  static Rule_extension_att* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
