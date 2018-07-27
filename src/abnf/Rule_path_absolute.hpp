/* -----------------------------------------------------------------------------
 * Rule_path_absolute.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_path_absolute_hpp
#define Rule_path_absolute_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_path_absolute : public Rule
{
public:
  Rule_path_absolute(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_path_absolute(const Rule_path_absolute& rule);

  Rule_path_absolute& operator=(const Rule_path_absolute& rule);

  virtual Rule* clone(void) const;

  static Rule_path_absolute* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
