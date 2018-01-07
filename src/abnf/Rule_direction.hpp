/* -----------------------------------------------------------------------------
 * Rule_direction.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_direction_hpp
#define Rule_direction_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_direction : public Rule
{
public:
  Rule_direction(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_direction(const Rule_direction& rule);

  Rule_direction& operator=(const Rule_direction& rule);

  const Rule_direction* clone(void) const;

  static const Rule_direction* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
