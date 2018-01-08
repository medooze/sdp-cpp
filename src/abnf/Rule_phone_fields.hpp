/* -----------------------------------------------------------------------------
 * Rule_phone_fields.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_phone_fields_hpp
#define Rule_phone_fields_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_phone_fields : public Rule
{
public:
  Rule_phone_fields(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_phone_fields(const Rule_phone_fields& rule);

  Rule_phone_fields& operator=(const Rule_phone_fields& rule);

  const Rule_phone_fields* clone(void) const;

  static const Rule_phone_fields* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
