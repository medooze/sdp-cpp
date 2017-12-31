/* -----------------------------------------------------------------------------
 * Rule_text.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_text_hpp
#define Rule_text_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_text : public Rule
{
public:
  Rule_text(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_text(const Rule_text& rule);

  Rule_text& operator=(const Rule_text& rule);

  const Rule_text* clone(void) const;

  static const Rule_text* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
