/* -----------------------------------------------------------------------------
 * Rule_integer.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_integer_hpp
#define Rule_integer_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_integer : public Rule
{
public:
  Rule_integer(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_integer(const Rule_integer& rule);

  Rule_integer& operator=(const Rule_integer& rule);

  const Rule_integer* clone(void) const;

  static const Rule_integer* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
