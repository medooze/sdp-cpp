/* -----------------------------------------------------------------------------
 * Rule_media_clkid.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_media_clkid_hpp
#define Rule_media_clkid_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_media_clkid : public Rule
{
public:
  Rule_media_clkid(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_media_clkid(const Rule_media_clkid& rule);

  Rule_media_clkid& operator=(const Rule_media_clkid& rule);

  virtual Rule* clone(void) const;

  static Rule_media_clkid* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
