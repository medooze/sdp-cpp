/* -----------------------------------------------------------------------------
 * Rule_att_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_att_field_hpp
#define Rule_att_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_att_field : public Rule
{
public:
  Rule_att_field(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_att_field(const Rule_att_field& rule);

  Rule_att_field& operator=(const Rule_att_field& rule);

  const Rule_att_field* clone(void) const;

  static const Rule_att_field* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
