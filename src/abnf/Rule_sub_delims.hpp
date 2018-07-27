/* -----------------------------------------------------------------------------
 * Rule_sub_delims.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_sub_delims_hpp
#define Rule_sub_delims_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_sub_delims : public Rule
{
public:
  Rule_sub_delims(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_sub_delims(const Rule_sub_delims& rule);

  Rule_sub_delims& operator=(const Rule_sub_delims& rule);

  virtual Rule* clone(void) const;

  static Rule_sub_delims* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
