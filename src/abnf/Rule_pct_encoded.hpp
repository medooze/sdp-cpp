/* -----------------------------------------------------------------------------
 * Rule_pct_encoded.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_pct_encoded_hpp
#define Rule_pct_encoded_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_pct_encoded : public Rule
{
public:
  Rule_pct_encoded(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_pct_encoded(const Rule_pct_encoded& rule);

  Rule_pct_encoded& operator=(const Rule_pct_encoded& rule);

  const Rule_pct_encoded* clone(void) const;

  static const Rule_pct_encoded* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
