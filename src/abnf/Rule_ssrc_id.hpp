/* -----------------------------------------------------------------------------
 * Rule_ssrc_id.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ssrc_id_hpp
#define Rule_ssrc_id_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ssrc_id : public Rule
{
public:
  Rule_ssrc_id(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_ssrc_id(const Rule_ssrc_id& rule);

  Rule_ssrc_id& operator=(const Rule_ssrc_id& rule);

  const Rule_ssrc_id* clone(void) const;

  static const Rule_ssrc_id* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
