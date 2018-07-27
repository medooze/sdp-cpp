/* -----------------------------------------------------------------------------
 * Rule_component_id.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_component_id_hpp
#define Rule_component_id_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_component_id : public Rule
{
public:
  Rule_component_id(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_component_id(const Rule_component_id& rule);

  Rule_component_id& operator=(const Rule_component_id& rule);

  virtual Rule* clone(void) const;

  static Rule_component_id* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
