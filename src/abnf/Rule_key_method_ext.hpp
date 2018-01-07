/* -----------------------------------------------------------------------------
 * Rule_key_method_ext.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_method_ext_hpp
#define Rule_key_method_ext_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_method_ext : public Rule
{
public:
  Rule_key_method_ext(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_method_ext(const Rule_key_method_ext& rule);

  Rule_key_method_ext& operator=(const Rule_key_method_ext& rule);

  const Rule_key_method_ext* clone(void) const;

  static const Rule_key_method_ext* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
