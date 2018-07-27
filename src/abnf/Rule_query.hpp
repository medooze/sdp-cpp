/* -----------------------------------------------------------------------------
 * Rule_query.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_query_hpp
#define Rule_query_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_query : public Rule
{
public:
  Rule_query(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_query(const Rule_query& rule);

  Rule_query& operator=(const Rule_query& rule);

  virtual Rule* clone(void) const;

  static Rule_query* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
