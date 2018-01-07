/* -----------------------------------------------------------------------------
 * Rule_nettype.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_nettype_hpp
#define Rule_nettype_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_nettype : public Rule
{
public:
  Rule_nettype(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_nettype(const Rule_nettype& rule);

  Rule_nettype& operator=(const Rule_nettype& rule);

  const Rule_nettype* clone(void) const;

  static const Rule_nettype* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
