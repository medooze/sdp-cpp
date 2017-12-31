/* -----------------------------------------------------------------------------
 * Rule_URI_reference.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_URI_reference_hpp
#define Rule_URI_reference_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_URI_reference : public Rule
{
public:
  Rule_URI_reference(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_URI_reference(const Rule_URI_reference& rule);

  Rule_URI_reference& operator=(const Rule_URI_reference& rule);

  const Rule_URI_reference* clone(void) const;

  static const Rule_URI_reference* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
