/* -----------------------------------------------------------------------------
 * Rule_typed_time.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_typed_time_hpp
#define Rule_typed_time_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_typed_time : public Rule
{
public:
  Rule_typed_time(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_typed_time(const Rule_typed_time& rule);

  Rule_typed_time& operator=(const Rule_typed_time& rule);

  const Rule_typed_time* clone(void) const;

  static const Rule_typed_time* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
