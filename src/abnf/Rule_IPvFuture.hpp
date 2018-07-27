/* -----------------------------------------------------------------------------
 * Rule_IPvFuture.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_IPvFuture_hpp
#define Rule_IPvFuture_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_IPvFuture : public Rule
{
public:
  Rule_IPvFuture(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_IPvFuture(const Rule_IPvFuture& rule);

  Rule_IPvFuture& operator=(const Rule_IPvFuture& rule);

  virtual Rule* clone(void) const;

  static Rule_IPvFuture* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
