/* -----------------------------------------------------------------------------
 * Rule_quoted_string.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_quoted_string_hpp
#define Rule_quoted_string_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_quoted_string : public Rule
{
public:
  Rule_quoted_string(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_quoted_string(const Rule_quoted_string& rule);

  Rule_quoted_string& operator=(const Rule_quoted_string& rule);

  const Rule_quoted_string* clone(void) const;

  static const Rule_quoted_string* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
