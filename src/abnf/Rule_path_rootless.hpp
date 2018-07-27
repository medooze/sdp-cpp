/* -----------------------------------------------------------------------------
 * Rule_path_rootless.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_path_rootless_hpp
#define Rule_path_rootless_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_path_rootless : public Rule
{
public:
  Rule_path_rootless(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_path_rootless(const Rule_path_rootless& rule);

  Rule_path_rootless& operator=(const Rule_path_rootless& rule);

  virtual Rule* clone(void) const;

  static Rule_path_rootless* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
