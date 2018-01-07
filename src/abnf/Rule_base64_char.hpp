/* -----------------------------------------------------------------------------
 * Rule_base64_char.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_base64_char_hpp
#define Rule_base64_char_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_base64_char : public Rule
{
public:
  Rule_base64_char(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_base64_char(const Rule_base64_char& rule);

  Rule_base64_char& operator=(const Rule_base64_char& rule);

  const Rule_base64_char* clone(void) const;

  static const Rule_base64_char* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
