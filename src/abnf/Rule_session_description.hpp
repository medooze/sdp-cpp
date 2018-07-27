/* -----------------------------------------------------------------------------
 * Rule_session_description.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_session_description_hpp
#define Rule_session_description_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_session_description : public Rule
{
public:
  Rule_session_description(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_session_description(const Rule_session_description& rule);

  Rule_session_description& operator=(const Rule_session_description& rule);

  virtual Rule* clone(void) const;

  static Rule_session_description* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
