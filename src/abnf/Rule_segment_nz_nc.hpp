/* -----------------------------------------------------------------------------
 * Rule_segment_nz_nc.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
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
  Rule_segment_nz_nc(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_segment_nz_nc(const Rule_segment_nz_nc& rule);

  Rule_segment_nz_nc& operator=(const Rule_segment_nz_nc& rule);

  virtual Rule* clone(void) const;

  static Rule_segment_nz_nc* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
