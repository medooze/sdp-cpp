/* -----------------------------------------------------------------------------
 * Rule_glonass.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_glonass_hpp
#define Rule_glonass_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_glonass : public Rule
{
public:
  Rule_glonass(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_glonass(const Rule_glonass& rule);

  Rule_glonass& operator=(const Rule_glonass& rule);

  virtual Rule* clone(void) const;

  static Rule_glonass* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
