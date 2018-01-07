/* -----------------------------------------------------------------------------
 * Rule_obs_FWS.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
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
  Rule_obs_FWS(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_obs_FWS(const Rule_obs_FWS& rule);

  Rule_obs_FWS& operator=(const Rule_obs_FWS& rule);

  const Rule_obs_FWS* clone(void) const;

  static const Rule_obs_FWS* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
