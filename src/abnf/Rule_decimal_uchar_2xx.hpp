/* -----------------------------------------------------------------------------
 * Rule_decimal_uchar_2xx.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_decimal_uchar_2xx_hpp
#define Rule_decimal_uchar_2xx_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_decimal_uchar_2xx : public Rule
{
public:
  Rule_decimal_uchar_2xx(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_decimal_uchar_2xx(const Rule_decimal_uchar_2xx& rule);

  Rule_decimal_uchar_2xx& operator=(const Rule_decimal_uchar_2xx& rule);

  virtual Rule* clone(void) const;

  static Rule_decimal_uchar_2xx* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
