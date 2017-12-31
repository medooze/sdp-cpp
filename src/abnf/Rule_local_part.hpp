/* -----------------------------------------------------------------------------
 * Rule_local_part.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_local_part_hpp
#define Rule_local_part_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_local_part : public Rule
{
public:
  Rule_local_part(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_local_part(const Rule_local_part& rule);

  Rule_local_part& operator=(const Rule_local_part& rule);

  const Rule_local_part* clone(void) const;

  static const Rule_local_part* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
