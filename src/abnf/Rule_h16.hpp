/* -----------------------------------------------------------------------------
 * Rule_h16.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_h16_hpp
#define Rule_h16_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_h16 : public Rule
{
public:
  Rule_h16(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_h16(const Rule_h16& rule);

  Rule_h16& operator=(const Rule_h16& rule);

  const Rule_h16* clone(void) const;

  static const Rule_h16* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
