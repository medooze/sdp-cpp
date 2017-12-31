/* -----------------------------------------------------------------------------
 * Rule_component_id.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
  Rule_component_id(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_component_id(const Rule_component_id& rule);

  Rule_component_id& operator=(const Rule_component_id& rule);

  const Rule_component_id* clone(void) const;

  static const Rule_component_id* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
