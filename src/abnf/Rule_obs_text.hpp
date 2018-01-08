/* -----------------------------------------------------------------------------
 * Rule_obs_text.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_obs_text_hpp
#define Rule_obs_text_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_obs_text : public Rule
{
public:
  Rule_obs_text(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_obs_text(const Rule_obs_text& rule);

  Rule_obs_text& operator=(const Rule_obs_text& rule);

  const Rule_obs_text* clone(void) const;

  static const Rule_obs_text* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
