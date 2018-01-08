/* -----------------------------------------------------------------------------
 * Rule_obs_qp.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_obs_qp_hpp
#define Rule_obs_qp_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_obs_qp : public Rule
{
public:
  Rule_obs_qp(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_obs_qp(const Rule_obs_qp& rule);

  Rule_obs_qp& operator=(const Rule_obs_qp& rule);

  const Rule_obs_qp* clone(void) const;

  static const Rule_obs_qp* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
