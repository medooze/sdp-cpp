/* -----------------------------------------------------------------------------
 * Rule_decimal_uchar.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
  Rule_decimal_uchar(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_decimal_uchar(const Rule_decimal_uchar& rule);

  Rule_decimal_uchar& operator=(const Rule_decimal_uchar& rule);

  const Rule_decimal_uchar* clone(void) const;

  static const Rule_decimal_uchar* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
