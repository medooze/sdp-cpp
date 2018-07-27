/* -----------------------------------------------------------------------------
 * Rule_key_type.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_type_hpp
#define Rule_key_type_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_type : public Rule
{
public:
  Rule_key_type(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_key_type(const Rule_key_type& rule);

  Rule_key_type& operator=(const Rule_key_type& rule);

  virtual Rule* clone(void) const;

  static Rule_key_type* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
