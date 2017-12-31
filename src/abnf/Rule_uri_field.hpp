/* -----------------------------------------------------------------------------
 * Rule_uri_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_uri_field_hpp
#define Rule_uri_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_uri_field : public Rule
{
public:
  Rule_uri_field(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_uri_field(const Rule_uri_field& rule);

  Rule_uri_field& operator=(const Rule_uri_field& rule);

  const Rule_uri_field* clone(void) const;

  static const Rule_uri_field* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
