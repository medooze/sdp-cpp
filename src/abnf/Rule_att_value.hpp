/* -----------------------------------------------------------------------------
 * Rule_att_value.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_att_value_hpp
#define Rule_att_value_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_att_value : public Rule
{
public:
  Rule_att_value(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_att_value(const Rule_att_value& rule);

  Rule_att_value& operator=(const Rule_att_value& rule);

  const Rule_att_value* clone(void) const;

  static const Rule_att_value* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
