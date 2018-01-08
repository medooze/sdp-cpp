/* -----------------------------------------------------------------------------
 * Rule_dtext.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_dtext_hpp
#define Rule_dtext_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_dtext : public Rule
{
public:
  Rule_dtext(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_dtext(const Rule_dtext& rule);

  Rule_dtext& operator=(const Rule_dtext& rule);

  const Rule_dtext* clone(void) const;

  static const Rule_dtext* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
