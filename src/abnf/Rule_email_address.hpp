/* -----------------------------------------------------------------------------
 * Rule_email_address.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_email_address_hpp
#define Rule_email_address_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_email_address : public Rule
{
public:
  Rule_email_address(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_email_address(const Rule_email_address& rule);

  Rule_email_address& operator=(const Rule_email_address& rule);

  const Rule_email_address* clone(void) const;

  static const Rule_email_address* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
