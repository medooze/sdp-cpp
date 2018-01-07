/* -----------------------------------------------------------------------------
 * Rule_phone_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_phone_field_hpp
#define Rule_phone_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_phone_field : public Rule
{
public:
  Rule_phone_field(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_phone_field(const Rule_phone_field& rule);

  Rule_phone_field& operator=(const Rule_phone_field& rule);

  const Rule_phone_field* clone(void) const;

  static const Rule_phone_field* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
