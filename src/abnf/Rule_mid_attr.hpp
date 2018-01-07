/* -----------------------------------------------------------------------------
 * Rule_mid_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_mid_attr_hpp
#define Rule_mid_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_mid_attr : public Rule
{
public:
  Rule_mid_attr(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_mid_attr(const Rule_mid_attr& rule);

  Rule_mid_attr& operator=(const Rule_mid_attr& rule);

  const Rule_mid_attr* clone(void) const;

  static const Rule_mid_attr* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
