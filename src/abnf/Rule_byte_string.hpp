/* -----------------------------------------------------------------------------
 * Rule_byte_string.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_byte_string_hpp
#define Rule_byte_string_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_byte_string : public Rule
{
public:
  Rule_byte_string(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_byte_string(const Rule_byte_string& rule);

  Rule_byte_string& operator=(const Rule_byte_string& rule);

  const Rule_byte_string* clone(void) const;

  static const Rule_byte_string* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
