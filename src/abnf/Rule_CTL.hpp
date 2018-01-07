/* -----------------------------------------------------------------------------
 * Rule_CTL.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_CTL_hpp
#define Rule_CTL_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_CTL : public Rule
{
public:
  Rule_CTL(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_CTL(const Rule_CTL& rule);

  Rule_CTL& operator=(const Rule_CTL& rule);

  const Rule_CTL* clone(void) const;

  static const Rule_CTL* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
