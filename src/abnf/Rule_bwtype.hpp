/* -----------------------------------------------------------------------------
 * Rule_bwtype.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_bwtype_hpp
#define Rule_bwtype_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_bwtype : public Rule
{
public:
  Rule_bwtype(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_bwtype(const Rule_bwtype& rule);

  Rule_bwtype& operator=(const Rule_bwtype& rule);

  const Rule_bwtype* clone(void) const;

  static const Rule_bwtype* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
