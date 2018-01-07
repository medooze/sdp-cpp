/* -----------------------------------------------------------------------------
 * Rule_addrtype.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_addrtype_hpp
#define Rule_addrtype_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_addrtype : public Rule
{
public:
  Rule_addrtype(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_addrtype(const Rule_addrtype& rule);

  Rule_addrtype& operator=(const Rule_addrtype& rule);

  const Rule_addrtype* clone(void) const;

  static const Rule_addrtype* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
