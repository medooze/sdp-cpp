/* -----------------------------------------------------------------------------
 * Rule_pct_encoded.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_pct_encoded_hpp
#define Rule_pct_encoded_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_pct_encoded : public Rule
{
public:
  Rule_pct_encoded(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_pct_encoded(const Rule_pct_encoded& rule);

  Rule_pct_encoded& operator=(const Rule_pct_encoded& rule);

  virtual Rule* clone(void) const;

  static Rule_pct_encoded* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
