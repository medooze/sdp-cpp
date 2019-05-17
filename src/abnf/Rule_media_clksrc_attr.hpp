/* -----------------------------------------------------------------------------
 * Rule_media_clksrc_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_media_clksrc_attr_hpp
#define Rule_media_clksrc_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_media_clksrc_attr : public Rule
{
public:
  Rule_media_clksrc_attr(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_media_clksrc_attr(const Rule_media_clksrc_attr& rule);

  Rule_media_clksrc_attr& operator=(const Rule_media_clksrc_attr& rule);

  virtual Rule* clone(void) const;

  static Rule_media_clksrc_attr* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
