/* -----------------------------------------------------------------------------
 * Rule_decimal_uchar_25x.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
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
  Rule_decimal_uchar_25x(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_decimal_uchar_25x(const Rule_decimal_uchar_25x& rule);

  Rule_decimal_uchar_25x& operator=(const Rule_decimal_uchar_25x& rule);

  virtual Rule* clone(void) const;

  static Rule_decimal_uchar_25x* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
