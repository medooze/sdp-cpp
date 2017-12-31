/* -----------------------------------------------------------------------------
 * Rule_BIT.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_BIT_hpp
#define Rule_BIT_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_BIT : public Rule
{
public:
  Rule_BIT(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_BIT(const Rule_BIT& rule);

  Rule_BIT& operator=(const Rule_BIT& rule);

  const Rule_BIT* clone(void) const;

  static const Rule_BIT* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
