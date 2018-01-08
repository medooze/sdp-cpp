/* -----------------------------------------------------------------------------
 * Rule_ALPHA.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ALPHA_hpp
#define Rule_ALPHA_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ALPHA : public Rule
{
public:
  Rule_ALPHA(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_ALPHA(const Rule_ALPHA& rule);

  Rule_ALPHA& operator=(const Rule_ALPHA& rule);

  const Rule_ALPHA* clone(void) const;

  static const Rule_ALPHA* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
