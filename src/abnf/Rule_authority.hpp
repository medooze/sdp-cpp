/* -----------------------------------------------------------------------------
 * Rule_authority.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_authority_hpp
#define Rule_authority_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_authority : public Rule
{
public:
  Rule_authority(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_authority(const Rule_authority& rule);

  Rule_authority& operator=(const Rule_authority& rule);

  virtual Rule* clone(void) const;

  static Rule_authority* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
