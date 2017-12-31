/* -----------------------------------------------------------------------------
 * Rule_priority.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_priority_hpp
#define Rule_priority_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_priority : public Rule
{
public:
  Rule_priority(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_priority(const Rule_priority& rule);

  Rule_priority& operator=(const Rule_priority& rule);

  const Rule_priority* clone(void) const;

  static const Rule_priority* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
