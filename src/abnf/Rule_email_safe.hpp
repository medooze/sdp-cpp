/* -----------------------------------------------------------------------------
 * Rule_email_safe.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_email_safe_hpp
#define Rule_email_safe_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_email_safe : public Rule
{
public:
  Rule_email_safe(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_email_safe(const Rule_email_safe& rule);

  Rule_email_safe& operator=(const Rule_email_safe& rule);

  const Rule_email_safe* clone(void) const;

  static const Rule_email_safe* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
