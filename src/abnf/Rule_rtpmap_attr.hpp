/* -----------------------------------------------------------------------------
 * Rule_rtpmap_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_rtpmap_attr_hpp
#define Rule_rtpmap_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_rtpmap_attr : public Rule
{
public:
  Rule_rtpmap_attr(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_rtpmap_attr(const Rule_rtpmap_attr& rule);

  Rule_rtpmap_attr& operator=(const Rule_rtpmap_attr& rule);

  const Rule_rtpmap_attr* clone(void) const;

  static const Rule_rtpmap_attr* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
