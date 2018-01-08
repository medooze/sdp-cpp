/* -----------------------------------------------------------------------------
 * Rule_VCHAR.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_VCHAR_hpp
#define Rule_VCHAR_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_VCHAR : public Rule
{
public:
  Rule_VCHAR(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_VCHAR(const Rule_VCHAR& rule);

  Rule_VCHAR& operator=(const Rule_VCHAR& rule);

  const Rule_VCHAR* clone(void) const;

  static const Rule_VCHAR* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
