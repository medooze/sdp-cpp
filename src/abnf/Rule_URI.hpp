/* -----------------------------------------------------------------------------
 * Rule_URI.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_URI_hpp
#define Rule_URI_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_URI : public Rule
{
public:
  Rule_URI(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_URI(const Rule_URI& rule);

  Rule_URI& operator=(const Rule_URI& rule);

  const Rule_URI* clone(void) const;

  static const Rule_URI* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
