/* -----------------------------------------------------------------------------
 * Rule_token.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_token_hpp
#define Rule_token_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_token : public Rule
{
public:
  Rule_token(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_token(const Rule_token& rule);

  Rule_token& operator=(const Rule_token& rule);

  const Rule_token* clone(void) const;

  static const Rule_token* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
