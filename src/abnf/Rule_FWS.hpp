/* -----------------------------------------------------------------------------
 * Rule_FWS.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_FWS_hpp
#define Rule_FWS_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_FWS : public Rule
{
public:
  Rule_FWS(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_FWS(const Rule_FWS& rule);

  Rule_FWS& operator=(const Rule_FWS& rule);

  const Rule_FWS* clone(void) const;

  static const Rule_FWS* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
