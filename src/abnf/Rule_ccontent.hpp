/* -----------------------------------------------------------------------------
 * Rule_ccontent.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ccontent_hpp
#define Rule_ccontent_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ccontent : public Rule
{
public:
  Rule_ccontent(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_ccontent(const Rule_ccontent& rule);

  Rule_ccontent& operator=(const Rule_ccontent& rule);

  const Rule_ccontent* clone(void) const;

  static const Rule_ccontent* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
