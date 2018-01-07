/* -----------------------------------------------------------------------------
 * Rule_phone.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_phone_hpp
#define Rule_phone_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_phone : public Rule
{
public:
  Rule_phone(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_phone(const Rule_phone& rule);

  Rule_phone& operator=(const Rule_phone& rule);

  const Rule_phone* clone(void) const;

  static const Rule_phone* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
