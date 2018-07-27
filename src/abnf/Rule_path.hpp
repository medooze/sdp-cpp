/* -----------------------------------------------------------------------------
 * Rule_path.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_path_hpp
#define Rule_path_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_path : public Rule
{
public:
  Rule_path(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_path(const Rule_path& rule);

  Rule_path& operator=(const Rule_path& rule);

  virtual Rule* clone(void) const;

  static Rule_path* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
