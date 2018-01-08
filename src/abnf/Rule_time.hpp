/* -----------------------------------------------------------------------------
 * Rule_time.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_time_hpp
#define Rule_time_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_time : public Rule
{
public:
  Rule_time(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_time(const Rule_time& rule);

  Rule_time& operator=(const Rule_time& rule);

  const Rule_time* clone(void) const;

  static const Rule_time* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
