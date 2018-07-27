/* -----------------------------------------------------------------------------
 * Rule_decimal_uchar.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_decimal_uchar_hpp
#define Rule_decimal_uchar_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_decimal_uchar : public Rule
{
public:
  Rule_decimal_uchar(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_decimal_uchar(const Rule_decimal_uchar& rule);

  Rule_decimal_uchar& operator=(const Rule_decimal_uchar& rule);

  virtual Rule* clone(void) const;

  static Rule_decimal_uchar* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
