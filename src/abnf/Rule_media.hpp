/* -----------------------------------------------------------------------------
 * Rule_media.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_media_hpp
#define Rule_media_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_media : public Rule
{
public:
  Rule_media(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_media(const Rule_media& rule);

  Rule_media& operator=(const Rule_media& rule);

  virtual Rule* clone(void) const;

  static Rule_media* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
