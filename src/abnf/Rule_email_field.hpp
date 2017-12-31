/* -----------------------------------------------------------------------------
 * Rule_email_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_email_field_hpp
#define Rule_email_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_email_field : public Rule
{
public:
  Rule_email_field(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_email_field(const Rule_email_field& rule);

  Rule_email_field& operator=(const Rule_email_field& rule);

  const Rule_email_field* clone(void) const;

  static const Rule_email_field* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
