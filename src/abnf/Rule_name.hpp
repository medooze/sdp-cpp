/* -----------------------------------------------------------------------------
 * Rule_name.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_name_hpp
#define Rule_name_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_name : public Rule
{
public:
  Rule_name(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_name(const Rule_name& rule);

  Rule_name& operator=(const Rule_name& rule);

  const Rule_name* clone(void) const;

  static const Rule_name* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
