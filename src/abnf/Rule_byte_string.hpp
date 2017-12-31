/* -----------------------------------------------------------------------------
 * Rule_byte_string.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
