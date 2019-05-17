/* -----------------------------------------------------------------------------
 * Rule_src_list.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_src_list_hpp
#define Rule_src_list_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_src_list : public Rule
{
public:
  Rule_src_list(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_src_list(const Rule_src_list& rule);

  Rule_src_list& operator=(const Rule_src_list& rule);

  virtual Rule* clone(void) const;

  static Rule_src_list* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
