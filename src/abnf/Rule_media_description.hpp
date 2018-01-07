/* -----------------------------------------------------------------------------
 * Rule_media_description.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_media_description_hpp
#define Rule_media_description_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_media_description : public Rule
{
public:
  Rule_media_description(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_media_description(const Rule_media_description& rule);

  Rule_media_description& operator=(const Rule_media_description& rule);

  const Rule_media_description* clone(void) const;

  static const Rule_media_description* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
