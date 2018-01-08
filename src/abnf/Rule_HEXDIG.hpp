/* -----------------------------------------------------------------------------
 * Rule_HEXDIG.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_HEXDIG_hpp
#define Rule_HEXDIG_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_HEXDIG : public Rule
{
public:
  Rule_HEXDIG(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_HEXDIG(const Rule_HEXDIG& rule);

  Rule_HEXDIG& operator=(const Rule_HEXDIG& rule);

  const Rule_HEXDIG* clone(void) const;

  static const Rule_HEXDIG* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
