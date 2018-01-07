/* -----------------------------------------------------------------------------
 * Rule_CRLF.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
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
  Rule_CRLF(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_CRLF(const Rule_CRLF& rule);

  Rule_CRLF& operator=(const Rule_CRLF& rule);

  const Rule_CRLF* clone(void) const;

  static const Rule_CRLF* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
