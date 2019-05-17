/* -----------------------------------------------------------------------------
 * Rule_fsrate.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_fsrate_hpp
#define Rule_fsrate_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_fsrate : public Rule
{
public:
  Rule_fsrate(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_fsrate(const Rule_fsrate& rule);

  Rule_fsrate& operator=(const Rule_fsrate& rule);

  virtual Rule* clone(void) const;

  static Rule_fsrate* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
