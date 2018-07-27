/* -----------------------------------------------------------------------------
 * Rule_segment.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_segment_hpp
#define Rule_segment_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_segment : public Rule
{
public:
  Rule_segment(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_segment(const Rule_segment& rule);

  Rule_segment& operator=(const Rule_segment& rule);

  virtual Rule* clone(void) const;

  static Rule_segment* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
