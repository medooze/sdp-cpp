/* -----------------------------------------------------------------------------
 * Rule_HTAB.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_HTAB_hpp
#define Rule_HTAB_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_HTAB : public Rule
{
public:
  Rule_HTAB(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_HTAB(const Rule_HTAB& rule);

  Rule_HTAB& operator=(const Rule_HTAB& rule);

  const Rule_HTAB* clone(void) const;

  static const Rule_HTAB* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
