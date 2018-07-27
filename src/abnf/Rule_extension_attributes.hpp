/* -----------------------------------------------------------------------------
 * Rule_extension_attributes.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_extension_attributes_hpp
#define Rule_extension_attributes_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_extension_attributes : public Rule
{
public:
  Rule_extension_attributes(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_extension_attributes(const Rule_extension_attributes& rule);

  Rule_extension_attributes& operator=(const Rule_extension_attributes& rule);

  virtual Rule* clone(void) const;

  static Rule_extension_attributes* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
