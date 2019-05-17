/* -----------------------------------------------------------------------------
 * Rule_ieee1722_streamid.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ieee1722_streamid_hpp
#define Rule_ieee1722_streamid_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ieee1722_streamid : public Rule
{
public:
  Rule_ieee1722_streamid(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ieee1722_streamid(const Rule_ieee1722_streamid& rule);

  Rule_ieee1722_streamid& operator=(const Rule_ieee1722_streamid& rule);

  virtual Rule* clone(void) const;

  static Rule_ieee1722_streamid* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
