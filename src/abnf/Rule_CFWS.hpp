/* -----------------------------------------------------------------------------
 * Rule_CFWS.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_CFWS_hpp
#define Rule_CFWS_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_CFWS : public Rule
{
public:
  Rule_CFWS(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_CFWS(const Rule_CFWS& rule);

  Rule_CFWS& operator=(const Rule_CFWS& rule);

  const Rule_CFWS* clone(void) const;

  static const Rule_CFWS* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
