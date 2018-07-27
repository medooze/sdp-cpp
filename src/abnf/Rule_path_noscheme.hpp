/* -----------------------------------------------------------------------------
 * Rule_path_noscheme.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_path_noscheme_hpp
#define Rule_path_noscheme_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_path_noscheme : public Rule
{
public:
  Rule_path_noscheme(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_path_noscheme(const Rule_path_noscheme& rule);

  Rule_path_noscheme& operator=(const Rule_path_noscheme& rule);

  virtual Rule* clone(void) const;

  static Rule_path_noscheme* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
