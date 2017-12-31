/* -----------------------------------------------------------------------------
 * Rule_EQUALS.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_EQUALS_hpp
#define Rule_EQUALS_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_EQUALS : public Rule
{
public:
  Rule_EQUALS(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_EQUALS(const Rule_EQUALS& rule);

  Rule_EQUALS& operator=(const Rule_EQUALS& rule);

  const Rule_EQUALS* clone(void) const;

  static const Rule_EQUALS* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
