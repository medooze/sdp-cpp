/* -----------------------------------------------------------------------------
 * Rule_connection_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_connection_field_hpp
#define Rule_connection_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_connection_field : public Rule
{
public:
  Rule_connection_field(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_connection_field(const Rule_connection_field& rule);

  Rule_connection_field& operator=(const Rule_connection_field& rule);

  const Rule_connection_field* clone(void) const;

  static const Rule_connection_field* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
