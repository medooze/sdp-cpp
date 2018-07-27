/* -----------------------------------------------------------------------------
 * Rule_address_and_comment.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_address_and_comment_hpp
#define Rule_address_and_comment_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_address_and_comment : public Rule
{
public:
  Rule_address_and_comment(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_address_and_comment(const Rule_address_and_comment& rule);

  Rule_address_and_comment& operator=(const Rule_address_and_comment& rule);

  virtual Rule* clone(void) const;

  static Rule_address_and_comment* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
