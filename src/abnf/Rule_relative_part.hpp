/* -----------------------------------------------------------------------------
 * Rule_relative_part.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_relative_part_hpp
#define Rule_relative_part_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_relative_part : public Rule
{
public:
  Rule_relative_part(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_relative_part(const Rule_relative_part& rule);

  Rule_relative_part& operator=(const Rule_relative_part& rule);

  const Rule_relative_part* clone(void) const;

  static const Rule_relative_part* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
