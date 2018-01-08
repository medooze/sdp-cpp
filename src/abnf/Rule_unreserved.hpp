/* -----------------------------------------------------------------------------
 * Rule_unreserved.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_unreserved_hpp
#define Rule_unreserved_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_unreserved : public Rule
{
public:
  Rule_unreserved(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_unreserved(const Rule_unreserved& rule);

  Rule_unreserved& operator=(const Rule_unreserved& rule);

  const Rule_unreserved* clone(void) const;

  static const Rule_unreserved* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
