/* -----------------------------------------------------------------------------
 * Rule_CR.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_CR_hpp
#define Rule_CR_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_CR : public Rule
{
public:
  Rule_CR(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_CR(const Rule_CR& rule);

  Rule_CR& operator=(const Rule_CR& rule);

  const Rule_CR* clone(void) const;

  static const Rule_CR* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
