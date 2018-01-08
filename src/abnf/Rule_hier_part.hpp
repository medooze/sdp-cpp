/* -----------------------------------------------------------------------------
 * Rule_hier_part.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_hier_part_hpp
#define Rule_hier_part_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_hier_part : public Rule
{
public:
  Rule_hier_part(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_hier_part(const Rule_hier_part& rule);

  Rule_hier_part& operator=(const Rule_hier_part& rule);

  const Rule_hier_part* clone(void) const;

  static const Rule_hier_part* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
