/* -----------------------------------------------------------------------------
 * Rule_scheme.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_scheme_hpp
#define Rule_scheme_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_scheme : public Rule
{
public:
  Rule_scheme(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_scheme(const Rule_scheme& rule);

  Rule_scheme& operator=(const Rule_scheme& rule);

  const Rule_scheme* clone(void) const;

  static const Rule_scheme* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
