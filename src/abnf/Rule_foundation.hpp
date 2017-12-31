/* -----------------------------------------------------------------------------
 * Rule_foundation.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_foundation_hpp
#define Rule_foundation_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_foundation : public Rule
{
public:
  Rule_foundation(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_foundation(const Rule_foundation& rule);

  Rule_foundation& operator=(const Rule_foundation& rule);

  const Rule_foundation* clone(void) const;

  static const Rule_foundation* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
