/* -----------------------------------------------------------------------------
 * Rule_pchar.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_pchar_hpp
#define Rule_pchar_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_pchar : public Rule
{
public:
  Rule_pchar(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_pchar(const Rule_pchar& rule);

  Rule_pchar& operator=(const Rule_pchar& rule);

  const Rule_pchar* clone(void) const;

  static const Rule_pchar* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
