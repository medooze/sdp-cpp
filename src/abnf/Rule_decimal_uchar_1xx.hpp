/* -----------------------------------------------------------------------------
 * Rule_decimal_uchar_1xx.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_decimal_uchar_1xx_hpp
#define Rule_decimal_uchar_1xx_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_decimal_uchar_1xx : public Rule
{
public:
  Rule_decimal_uchar_1xx(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_decimal_uchar_1xx(const Rule_decimal_uchar_1xx& rule);

  Rule_decimal_uchar_1xx& operator=(const Rule_decimal_uchar_1xx& rule);

  const Rule_decimal_uchar_1xx* clone(void) const;

  static const Rule_decimal_uchar_1xx* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
