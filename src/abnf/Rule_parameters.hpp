/* -----------------------------------------------------------------------------
 * Rule_parameters.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_parameters_hpp
#define Rule_parameters_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_parameters : public Rule
{
public:
  Rule_parameters(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_parameters(const Rule_parameters& rule);

  Rule_parameters& operator=(const Rule_parameters& rule);

  const Rule_parameters* clone(void) const;

  static const Rule_parameters* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
