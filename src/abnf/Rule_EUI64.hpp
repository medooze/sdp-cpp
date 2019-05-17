/* -----------------------------------------------------------------------------
 * Rule_EUI64.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_EUI64_hpp
#define Rule_EUI64_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_EUI64 : public Rule
{
public:
  Rule_EUI64(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_EUI64(const Rule_EUI64& rule);

  Rule_EUI64& operator=(const Rule_EUI64& rule);

  virtual Rule* clone(void) const;

  static Rule_EUI64* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
