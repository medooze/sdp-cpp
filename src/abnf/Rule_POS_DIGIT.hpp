/* -----------------------------------------------------------------------------
 * Rule_POS_DIGIT.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_POS_DIGIT_hpp
#define Rule_POS_DIGIT_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_POS_DIGIT : public Rule
{
public:
  Rule_POS_DIGIT(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_POS_DIGIT(const Rule_POS_DIGIT& rule);

  Rule_POS_DIGIT& operator=(const Rule_POS_DIGIT& rule);

  const Rule_POS_DIGIT* clone(void) const;

  static const Rule_POS_DIGIT* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
