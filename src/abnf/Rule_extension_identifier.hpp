/* -----------------------------------------------------------------------------
 * Rule_extension_identifier.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_extension_identifier_hpp
#define Rule_extension_identifier_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_extension_identifier : public Rule
{
public:
  Rule_extension_identifier(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_extension_identifier(const Rule_extension_identifier& rule);

  Rule_extension_identifier& operator=(const Rule_extension_identifier& rule);

  virtual Rule* clone(void) const;

  static Rule_extension_identifier* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
