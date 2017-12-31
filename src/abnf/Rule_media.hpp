/* -----------------------------------------------------------------------------
 * Rule_media.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
  Rule_media(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_media(const Rule_media& rule);

  Rule_media& operator=(const Rule_media& rule);

  const Rule_media* clone(void) const;

  static const Rule_media* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
