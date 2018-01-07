/* -----------------------------------------------------------------------------
 * Rule_base64_key_type.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_base64_key_type_hpp
#define Rule_base64_key_type_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_base64_key_type : public Rule
{
public:
  Rule_base64_key_type(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_base64_key_type(const Rule_base64_key_type& rule);

  Rule_base64_key_type& operator=(const Rule_base64_key_type& rule);

  const Rule_base64_key_type* clone(void) const;

  static const Rule_base64_key_type* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
