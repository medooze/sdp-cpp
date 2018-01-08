/* -----------------------------------------------------------------------------
 * Rule_CHAR.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_CHAR_hpp
#define Rule_CHAR_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_CHAR : public Rule
{
public:
  Rule_CHAR(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_CHAR(const Rule_CHAR& rule);

  Rule_CHAR& operator=(const Rule_CHAR& rule);

  const Rule_CHAR* clone(void) const;

  static const Rule_CHAR* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
