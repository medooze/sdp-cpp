/* -----------------------------------------------------------------------------
 * Rule_obs_char.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_obs_char_hpp
#define Rule_obs_char_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_obs_char : public Rule
{
public:
  Rule_obs_char(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_obs_char(const Rule_obs_char& rule);

  Rule_obs_char& operator=(const Rule_obs_char& rule);

  const Rule_obs_char* clone(void) const;

  static const Rule_obs_char* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
