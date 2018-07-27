/* -----------------------------------------------------------------------------
 * Rule_comment.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_comment_hpp
#define Rule_comment_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_comment : public Rule
{
public:
  Rule_comment(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_comment(const Rule_comment& rule);

  Rule_comment& operator=(const Rule_comment& rule);

  virtual Rule* clone(void) const;

  static Rule_comment* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
