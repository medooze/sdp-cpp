/* -----------------------------------------------------------------------------
 * Rule_key_params.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_params_hpp
#define Rule_key_params_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_params : public Rule
{
public:
  Rule_key_params(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_params(const Rule_key_params& rule);

  Rule_key_params& operator=(const Rule_key_params& rule);

  const Rule_key_params* clone(void) const;

  static const Rule_key_params* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
