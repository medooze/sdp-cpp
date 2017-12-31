/* -----------------------------------------------------------------------------
 * Rule_ALPHA.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
