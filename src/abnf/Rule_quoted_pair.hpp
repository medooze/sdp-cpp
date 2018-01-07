/* -----------------------------------------------------------------------------
 * Rule_quoted_pair.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_quoted_pair_hpp
#define Rule_quoted_pair_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_quoted_pair : public Rule
{
public:
  Rule_quoted_pair(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_quoted_pair(const Rule_quoted_pair& rule);

  Rule_quoted_pair& operator=(const Rule_quoted_pair& rule);

  const Rule_quoted_pair* clone(void) const;

  static const Rule_quoted_pair* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
