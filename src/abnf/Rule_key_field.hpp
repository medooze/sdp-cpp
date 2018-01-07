/* -----------------------------------------------------------------------------
 * Rule_key_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
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
  Rule_key_field(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_field(const Rule_key_field& rule);

  Rule_key_field& operator=(const Rule_key_field& rule);

  const Rule_key_field* clone(void) const;

  static const Rule_key_field* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
