/* -----------------------------------------------------------------------------
 * Rule_decimal_uchar_25x.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_decimal_uchar_25x_hpp
#define Rule_decimal_uchar_25x_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_decimal_uchar_25x : public Rule
{
public:
  Rule_decimal_uchar_25x(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_decimal_uchar_25x(const Rule_decimal_uchar_25x& rule);

  Rule_decimal_uchar_25x& operator=(const Rule_decimal_uchar_25x& rule);

  const Rule_decimal_uchar_25x* clone(void) const;

  static const Rule_decimal_uchar_25x* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
