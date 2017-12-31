/* -----------------------------------------------------------------------------
 * Rule_key_method.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
  Rule_key_method(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_method(const Rule_key_method& rule);

  Rule_key_method& operator=(const Rule_key_method& rule);

  const Rule_key_method* clone(void) const;

  static const Rule_key_method* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
