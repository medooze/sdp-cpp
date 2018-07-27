/* -----------------------------------------------------------------------------
 * Rule_CRLF.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_CRLF_hpp
#define Rule_CRLF_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_CRLF : public Rule
{
public:
  Rule_CRLF(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_CRLF(const Rule_CRLF& rule);

  Rule_CRLF& operator=(const Rule_CRLF& rule);

  virtual Rule* clone(void) const;

  static Rule_CRLF* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
