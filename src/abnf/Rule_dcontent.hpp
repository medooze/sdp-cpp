/* -----------------------------------------------------------------------------
 * Rule_dcontent.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_dcontent_hpp
#define Rule_dcontent_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_dcontent : public Rule
{
public:
  Rule_dcontent(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_dcontent(const Rule_dcontent& rule);

  Rule_dcontent& operator=(const Rule_dcontent& rule);

  virtual Rule* clone(void) const;

  static Rule_dcontent* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
