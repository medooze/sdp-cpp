/* -----------------------------------------------------------------------------
 * Rule_time_fields.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_time_fields_hpp
#define Rule_time_fields_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_time_fields : public Rule
{
public:
  Rule_time_fields(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_time_fields(const Rule_time_fields& rule);

  Rule_time_fields& operator=(const Rule_time_fields& rule);

  const Rule_time_fields* clone(void) const;

  static const Rule_time_fields* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
