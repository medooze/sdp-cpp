/* -----------------------------------------------------------------------------
 * Rule_OCTET.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_OCTET_hpp
#define Rule_OCTET_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_OCTET : public Rule
{
public:
  Rule_OCTET(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_OCTET(const Rule_OCTET& rule);

  Rule_OCTET& operator=(const Rule_OCTET& rule);

  virtual Rule* clone(void) const;

  static Rule_OCTET* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
