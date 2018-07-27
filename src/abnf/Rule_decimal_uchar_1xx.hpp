/* -----------------------------------------------------------------------------
 * Rule_decimal_uchar_1xx.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
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
  Rule_decimal_uchar_1xx(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_decimal_uchar_1xx(const Rule_decimal_uchar_1xx& rule);

  Rule_decimal_uchar_1xx& operator=(const Rule_decimal_uchar_1xx& rule);

  virtual Rule* clone(void) const;

  static Rule_decimal_uchar_1xx* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
