/* -----------------------------------------------------------------------------
 * Rule_authority.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_authority_hpp
#define Rule_authority_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_authority : public Rule
{
public:
  Rule_authority(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_authority(const Rule_authority& rule);

  Rule_authority& operator=(const Rule_authority& rule);

  const Rule_authority* clone(void) const;

  static const Rule_authority* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
