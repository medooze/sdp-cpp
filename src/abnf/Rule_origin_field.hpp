/* -----------------------------------------------------------------------------
 * Rule_origin_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_origin_field_hpp
#define Rule_origin_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_origin_field : public Rule
{
public:
  Rule_origin_field(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_origin_field(const Rule_origin_field& rule);

  Rule_origin_field& operator=(const Rule_origin_field& rule);

  virtual Rule* clone(void) const;

  static Rule_origin_field* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
