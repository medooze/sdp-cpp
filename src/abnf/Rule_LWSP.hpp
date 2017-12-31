/* -----------------------------------------------------------------------------
 * Rule_LWSP.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_LWSP_hpp
#define Rule_LWSP_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_LWSP : public Rule
{
public:
  Rule_LWSP(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_LWSP(const Rule_LWSP& rule);

  Rule_LWSP& operator=(const Rule_LWSP& rule);

  const Rule_LWSP* clone(void) const;

  static const Rule_LWSP* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
