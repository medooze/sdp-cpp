/* -----------------------------------------------------------------------------
 * Rule_bandwidth.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_bandwidth_hpp
#define Rule_bandwidth_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_bandwidth : public Rule
{
public:
  Rule_bandwidth(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_bandwidth(const Rule_bandwidth& rule);

  Rule_bandwidth& operator=(const Rule_bandwidth& rule);

  virtual Rule* clone(void) const;

  static Rule_bandwidth* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
