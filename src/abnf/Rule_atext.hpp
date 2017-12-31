/* -----------------------------------------------------------------------------
 * Rule_atext.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_atext_hpp
#define Rule_atext_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_atext : public Rule
{
public:
  Rule_atext(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_atext(const Rule_atext& rule);

  Rule_atext& operator=(const Rule_atext& rule);

  const Rule_atext* clone(void) const;

  static const Rule_atext* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
