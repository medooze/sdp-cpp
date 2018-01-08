/* -----------------------------------------------------------------------------
 * Rule_reserved.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_reserved_hpp
#define Rule_reserved_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_reserved : public Rule
{
public:
  Rule_reserved(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_reserved(const Rule_reserved& rule);

  Rule_reserved& operator=(const Rule_reserved& rule);

  const Rule_reserved* clone(void) const;

  static const Rule_reserved* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
