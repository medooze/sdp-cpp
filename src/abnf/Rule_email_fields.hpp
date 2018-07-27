/* -----------------------------------------------------------------------------
 * Rule_email_fields.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_email_fields_hpp
#define Rule_email_fields_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_email_fields : public Rule
{
public:
  Rule_email_fields(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_email_fields(const Rule_email_fields& rule);

  Rule_email_fields& operator=(const Rule_email_fields& rule);

  virtual Rule* clone(void) const;

  static Rule_email_fields* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
