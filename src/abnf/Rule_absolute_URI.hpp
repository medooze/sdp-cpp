/* -----------------------------------------------------------------------------
 * Rule_absolute_URI.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_absolute_URI_hpp
#define Rule_absolute_URI_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_absolute_URI : public Rule
{
public:
  Rule_absolute_URI(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_absolute_URI(const Rule_absolute_URI& rule);

  Rule_absolute_URI& operator=(const Rule_absolute_URI& rule);

  virtual Rule* clone(void) const;

  static Rule_absolute_URI* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
