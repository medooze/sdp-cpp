/* -----------------------------------------------------------------------------
 * Rule_group_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_group_attr_hpp
#define Rule_group_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_group_attr : public Rule
{
public:
  Rule_group_attr(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_group_attr(const Rule_group_attr& rule);

  Rule_group_attr& operator=(const Rule_group_attr& rule);

  const Rule_group_attr* clone(void) const;

  static const Rule_group_attr* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
