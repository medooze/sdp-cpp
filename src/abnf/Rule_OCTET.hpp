/* -----------------------------------------------------------------------------
 * Rule_OCTET.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_OCTET_hpp
#define Rule_OCTET_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_OCTET : public Rule
{
public:
  Rule_OCTET(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_OCTET(const Rule_OCTET& rule);

  Rule_OCTET& operator=(const Rule_OCTET& rule);

  const Rule_OCTET* clone(void) const;

  static const Rule_OCTET* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
