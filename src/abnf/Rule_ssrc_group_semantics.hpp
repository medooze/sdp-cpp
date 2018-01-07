/* -----------------------------------------------------------------------------
 * Rule_ssrc_group_semantics.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ssrc_group_semantics_hpp
#define Rule_ssrc_group_semantics_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ssrc_group_semantics : public Rule
{
public:
  Rule_ssrc_group_semantics(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_ssrc_group_semantics(const Rule_ssrc_group_semantics& rule);

  Rule_ssrc_group_semantics& operator=(const Rule_ssrc_group_semantics& rule);

  const Rule_ssrc_group_semantics* clone(void) const;

  static const Rule_ssrc_group_semantics* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
