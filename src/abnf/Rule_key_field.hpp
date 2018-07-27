/* -----------------------------------------------------------------------------
 * Rule_key_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_field_hpp
#define Rule_key_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_field : public Rule
{
public:
  Rule_key_field(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_key_field(const Rule_key_field& rule);

  Rule_key_field& operator=(const Rule_key_field& rule);

  virtual Rule* clone(void) const;

  static Rule_key_field* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
