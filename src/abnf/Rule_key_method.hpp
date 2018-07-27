/* -----------------------------------------------------------------------------
 * Rule_key_method.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_method_hpp
#define Rule_key_method_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_method : public Rule
{
public:
  Rule_key_method(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_key_method(const Rule_key_method& rule);

  Rule_key_method& operator=(const Rule_key_method& rule);

  virtual Rule* clone(void) const;

  static Rule_key_method* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
