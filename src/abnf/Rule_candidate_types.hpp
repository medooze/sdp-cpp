/* -----------------------------------------------------------------------------
 * Rule_candidate_types.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_candidate_types_hpp
#define Rule_candidate_types_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_candidate_types : public Rule
{
public:
  Rule_candidate_types(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_candidate_types(const Rule_candidate_types& rule);

  Rule_candidate_types& operator=(const Rule_candidate_types& rule);

  virtual Rule* clone(void) const;

  static Rule_candidate_types* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
