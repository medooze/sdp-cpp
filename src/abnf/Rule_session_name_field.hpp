/* -----------------------------------------------------------------------------
 * Rule_session_name_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_session_name_field_hpp
#define Rule_session_name_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_session_name_field : public Rule
{
public:
  Rule_session_name_field(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_session_name_field(const Rule_session_name_field& rule);

  Rule_session_name_field& operator=(const Rule_session_name_field& rule);

  const Rule_session_name_field* clone(void) const;

  static const Rule_session_name_field* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
