/* -----------------------------------------------------------------------------
 * Rule_ttl.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ttl_hpp
#define Rule_ttl_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ttl : public Rule
{
public:
  Rule_ttl(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_ttl(const Rule_ttl& rule);

  Rule_ttl& operator=(const Rule_ttl& rule);

  const Rule_ttl* clone(void) const;

  static const Rule_ttl* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
