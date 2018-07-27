/* -----------------------------------------------------------------------------
 * Rule_URI_reference.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_URI_reference_hpp
#define Rule_URI_reference_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_URI_reference : public Rule
{
public:
  Rule_URI_reference(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_URI_reference(const Rule_URI_reference& rule);

  Rule_URI_reference& operator=(const Rule_URI_reference& rule);

  virtual Rule* clone(void) const;

  static Rule_URI_reference* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
