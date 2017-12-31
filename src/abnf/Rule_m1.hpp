/* -----------------------------------------------------------------------------
 * Rule_m1.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_m1_hpp
#define Rule_m1_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_m1 : public Rule
{
public:
  Rule_m1(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_m1(const Rule_m1& rule);

  Rule_m1& operator=(const Rule_m1& rule);

  const Rule_m1* clone(void) const;

  static const Rule_m1* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
