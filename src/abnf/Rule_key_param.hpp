/* -----------------------------------------------------------------------------
 * Rule_key_param.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_param_hpp
#define Rule_key_param_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_param : public Rule
{
public:
  Rule_key_param(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_param(const Rule_key_param& rule);

  Rule_key_param& operator=(const Rule_key_param& rule);

  const Rule_key_param* clone(void) const;

  static const Rule_key_param* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
