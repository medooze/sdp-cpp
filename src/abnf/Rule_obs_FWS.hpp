/* -----------------------------------------------------------------------------
 * Rule_obs_FWS.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_obs_FWS_hpp
#define Rule_obs_FWS_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_obs_FWS : public Rule
{
public:
  Rule_obs_FWS(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_obs_FWS(const Rule_obs_FWS& rule);

  Rule_obs_FWS& operator=(const Rule_obs_FWS& rule);

  virtual Rule* clone(void) const;

  static Rule_obs_FWS* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
