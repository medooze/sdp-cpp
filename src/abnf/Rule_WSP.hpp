/* -----------------------------------------------------------------------------
 * Rule_WSP.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_WSP_hpp
#define Rule_WSP_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_WSP : public Rule
{
public:
  Rule_WSP(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_WSP(const Rule_WSP& rule);

  Rule_WSP& operator=(const Rule_WSP& rule);

  const Rule_WSP* clone(void) const;

  static const Rule_WSP* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
