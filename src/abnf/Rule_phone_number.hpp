/* -----------------------------------------------------------------------------
 * Rule_phone_number.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_phone_number_hpp
#define Rule_phone_number_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_phone_number : public Rule
{
public:
  Rule_phone_number(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_phone_number(const Rule_phone_number& rule);

  Rule_phone_number& operator=(const Rule_phone_number& rule);

  const Rule_phone_number* clone(void) const;

  static const Rule_phone_number* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
