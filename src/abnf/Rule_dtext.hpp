/* -----------------------------------------------------------------------------
 * Rule_dtext.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
