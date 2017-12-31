/* -----------------------------------------------------------------------------
 * Rule_segment_nz_nc.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_segment_nz_nc_hpp
#define Rule_segment_nz_nc_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_segment_nz_nc : public Rule
{
public:
  Rule_segment_nz_nc(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_segment_nz_nc(const Rule_segment_nz_nc& rule);

  Rule_segment_nz_nc& operator=(const Rule_segment_nz_nc& rule);

  const Rule_segment_nz_nc* clone(void) const;

  static const Rule_segment_nz_nc* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
