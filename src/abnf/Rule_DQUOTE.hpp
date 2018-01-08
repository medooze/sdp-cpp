/* -----------------------------------------------------------------------------
 * Rule_DQUOTE.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_DQUOTE_hpp
#define Rule_DQUOTE_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_DQUOTE : public Rule
{
public:
  Rule_DQUOTE(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_DQUOTE(const Rule_DQUOTE& rule);

  Rule_DQUOTE& operator=(const Rule_DQUOTE& rule);

  const Rule_DQUOTE* clone(void) const;

  static const Rule_DQUOTE* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
