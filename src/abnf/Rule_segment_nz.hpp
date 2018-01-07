/* -----------------------------------------------------------------------------
 * Rule_segment_nz.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_segment_nz_hpp
#define Rule_segment_nz_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_segment_nz : public Rule
{
public:
  Rule_segment_nz(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_segment_nz(const Rule_segment_nz& rule);

  Rule_segment_nz& operator=(const Rule_segment_nz& rule);

  const Rule_segment_nz* clone(void) const;

  static const Rule_segment_nz* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
