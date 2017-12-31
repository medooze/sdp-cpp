/* -----------------------------------------------------------------------------
 * Rule_param_list.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_param_list_hpp
#define Rule_param_list_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_param_list : public Rule
{
public:
  Rule_param_list(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_param_list(const Rule_param_list& rule);

  Rule_param_list& operator=(const Rule_param_list& rule);

  const Rule_param_list* clone(void) const;

  static const Rule_param_list* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
