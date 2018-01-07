/* -----------------------------------------------------------------------------
 * Rule_relative_ref.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_relative_ref_hpp
#define Rule_relative_ref_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_relative_ref : public Rule
{
public:
  Rule_relative_ref(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_relative_ref(const Rule_relative_ref& rule);

  Rule_relative_ref& operator=(const Rule_relative_ref& rule);

  const Rule_relative_ref* clone(void) const;

  static const Rule_relative_ref* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
