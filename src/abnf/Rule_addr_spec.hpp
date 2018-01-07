/* -----------------------------------------------------------------------------
 * Rule_addr_spec.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_addr_spec_hpp
#define Rule_addr_spec_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_addr_spec : public Rule
{
public:
  Rule_addr_spec(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_addr_spec(const Rule_addr_spec& rule);

  Rule_addr_spec& operator=(const Rule_addr_spec& rule);

  const Rule_addr_spec* clone(void) const;

  static const Rule_addr_spec* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
