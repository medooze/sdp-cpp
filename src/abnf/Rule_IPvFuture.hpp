/* -----------------------------------------------------------------------------
 * Rule_IPvFuture.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_IPvFuture_hpp
#define Rule_IPvFuture_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_IPvFuture : public Rule
{
public:
  Rule_IPvFuture(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_IPvFuture(const Rule_IPvFuture& rule);

  Rule_IPvFuture& operator=(const Rule_IPvFuture& rule);

  const Rule_IPvFuture* clone(void) const;

  static const Rule_IPvFuture* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
