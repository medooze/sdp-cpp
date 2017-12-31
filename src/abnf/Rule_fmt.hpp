/* -----------------------------------------------------------------------------
 * Rule_fmt.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_fmt_hpp
#define Rule_fmt_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_fmt : public Rule
{
public:
  Rule_fmt(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_fmt(const Rule_fmt& rule);

  Rule_fmt& operator=(const Rule_fmt& rule);

  const Rule_fmt* clone(void) const;

  static const Rule_fmt* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
