/* -----------------------------------------------------------------------------
 * Rule_LF.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_LF_hpp
#define Rule_LF_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_LF : public Rule
{
public:
  Rule_LF(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_LF(const Rule_LF& rule);

  Rule_LF& operator=(const Rule_LF& rule);

  const Rule_LF* clone(void) const;

  static const Rule_LF* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
