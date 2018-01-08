/* -----------------------------------------------------------------------------
 * Rule_sctpmap_number.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_sctpmap_number_hpp
#define Rule_sctpmap_number_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_sctpmap_number : public Rule
{
public:
  Rule_sctpmap_number(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_sctpmap_number(const Rule_sctpmap_number& rule);

  Rule_sctpmap_number& operator=(const Rule_sctpmap_number& rule);

  const Rule_sctpmap_number* clone(void) const;

  static const Rule_sctpmap_number* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
