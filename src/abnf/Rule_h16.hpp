/* -----------------------------------------------------------------------------
 * Rule_h16.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_h16_hpp
#define Rule_h16_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_h16 : public Rule
{
public:
  Rule_h16(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_h16(const Rule_h16& rule);

  Rule_h16& operator=(const Rule_h16& rule);

  virtual Rule* clone(void) const;

  static Rule_h16* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
