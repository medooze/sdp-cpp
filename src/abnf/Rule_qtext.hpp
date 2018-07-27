/* -----------------------------------------------------------------------------
 * Rule_qtext.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_qtext_hpp
#define Rule_qtext_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_qtext : public Rule
{
public:
  Rule_qtext(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_qtext(const Rule_qtext& rule);

  Rule_qtext& operator=(const Rule_qtext& rule);

  virtual Rule* clone(void) const;

  static Rule_qtext* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
