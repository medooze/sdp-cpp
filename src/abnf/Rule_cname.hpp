/* -----------------------------------------------------------------------------
 * Rule_cname.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_cname_hpp
#define Rule_cname_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_cname : public Rule
{
public:
  Rule_cname(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_cname(const Rule_cname& rule);

  Rule_cname& operator=(const Rule_cname& rule);

  const Rule_cname* clone(void) const;

  static const Rule_cname* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
