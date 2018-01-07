/* -----------------------------------------------------------------------------
 * Rule_SP.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_SP_hpp
#define Rule_SP_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_SP : public Rule
{
public:
  Rule_SP(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_SP(const Rule_SP& rule);

  Rule_SP& operator=(const Rule_SP& rule);

  const Rule_SP* clone(void) const;

  static const Rule_SP* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
