/* -----------------------------------------------------------------------------
 * Rule_stop_time.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_stop_time_hpp
#define Rule_stop_time_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_stop_time : public Rule
{
public:
  Rule_stop_time(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_stop_time(const Rule_stop_time& rule);

  Rule_stop_time& operator=(const Rule_stop_time& rule);

  const Rule_stop_time* clone(void) const;

  static const Rule_stop_time* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
