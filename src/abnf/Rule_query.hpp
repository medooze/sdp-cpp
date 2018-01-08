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
  Rule_query(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_query(const Rule_query& rule);

  Rule_query& operator=(const Rule_query& rule);

  const Rule_query* clone(void) const;

  static const Rule_query* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
