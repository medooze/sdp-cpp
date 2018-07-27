/* -----------------------------------------------------------------------------
 * Rule_ccontent.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ccontent_hpp
#define Rule_ccontent_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ccontent : public Rule
{
public:
  Rule_ccontent(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ccontent(const Rule_ccontent& rule);

  Rule_ccontent& operator=(const Rule_ccontent& rule);

  virtual Rule* clone(void) const;

  static Rule_ccontent* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
