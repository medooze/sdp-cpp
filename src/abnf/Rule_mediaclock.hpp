/* -----------------------------------------------------------------------------
 * Rule_mediaclock.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_mediaclock_hpp
#define Rule_mediaclock_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_mediaclock : public Rule
{
public:
  Rule_mediaclock(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_mediaclock(const Rule_mediaclock& rule);

  Rule_mediaclock& operator=(const Rule_mediaclock& rule);

  virtual Rule* clone(void) const;

  static Rule_mediaclock* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
