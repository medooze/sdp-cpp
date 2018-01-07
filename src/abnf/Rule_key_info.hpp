/* -----------------------------------------------------------------------------
 * Rule_key_info.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_info_hpp
#define Rule_key_info_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_info : public Rule
{
public:
  Rule_key_info(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_info(const Rule_key_info& rule);

  Rule_key_info& operator=(const Rule_key_info& rule);

  const Rule_key_info* clone(void) const;

  static const Rule_key_info* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
