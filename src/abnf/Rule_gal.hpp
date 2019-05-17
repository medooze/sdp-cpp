/* -----------------------------------------------------------------------------
 * Rule_gal.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_gal_hpp
#define Rule_gal_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_gal : public Rule
{
public:
  Rule_gal(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_gal(const Rule_gal& rule);

  Rule_gal& operator=(const Rule_gal& rule);

  virtual Rule* clone(void) const;

  static Rule_gal* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
