/* -----------------------------------------------------------------------------
 * Rule_sender.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_sender_hpp
#define Rule_sender_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_sender : public Rule
{
public:
  Rule_sender(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_sender(const Rule_sender& rule);

  Rule_sender& operator=(const Rule_sender& rule);

  virtual Rule* clone(void) const;

  static Rule_sender* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
