/* -----------------------------------------------------------------------------
 * Rule_obs_domain.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_obs_domain_hpp
#define Rule_obs_domain_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_obs_domain : public Rule
{
public:
  Rule_obs_domain(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_obs_domain(const Rule_obs_domain& rule);

  Rule_obs_domain& operator=(const Rule_obs_domain& rule);

  const Rule_obs_domain* clone(void) const;

  static const Rule_obs_domain* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
