/* -----------------------------------------------------------------------------
 * Rule_absolute_URI.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_absolute_URI_hpp
#define Rule_absolute_URI_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_absolute_URI : public Rule
{
public:
  Rule_absolute_URI(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_absolute_URI(const Rule_absolute_URI& rule);

  Rule_absolute_URI& operator=(const Rule_absolute_URI& rule);

  const Rule_absolute_URI* clone(void) const;

  static const Rule_absolute_URI* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
