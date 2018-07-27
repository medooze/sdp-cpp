/* -----------------------------------------------------------------------------
 * Rule_attribute.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_attribute_hpp
#define Rule_attribute_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_attribute : public Rule
{
public:
  Rule_attribute(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_attribute(const Rule_attribute& rule);

  Rule_attribute& operator=(const Rule_attribute& rule);

  virtual Rule* clone(void) const;

  static Rule_attribute* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
