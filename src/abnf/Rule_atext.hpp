/* -----------------------------------------------------------------------------
 * Rule_atext.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_atext_hpp
#define Rule_atext_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_atext : public Rule
{
public:
  Rule_atext(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_atext(const Rule_atext& rule);

  Rule_atext& operator=(const Rule_atext& rule);

  virtual Rule* clone(void) const;

  static Rule_atext* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
