/* -----------------------------------------------------------------------------
 * Rule_base64_unit.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_base64_unit_hpp
#define Rule_base64_unit_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_base64_unit : public Rule
{
public:
  Rule_base64_unit(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_base64_unit(const Rule_base64_unit& rule);

  Rule_base64_unit& operator=(const Rule_base64_unit& rule);

  const Rule_base64_unit* clone(void) const;

  static const Rule_base64_unit* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
