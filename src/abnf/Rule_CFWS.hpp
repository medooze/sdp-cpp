/* -----------------------------------------------------------------------------
 * Rule_CFWS.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
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
