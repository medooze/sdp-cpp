/* -----------------------------------------------------------------------------
 * Rule_extension_identifier.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_extension_identifier_hpp
#define Rule_extension_identifier_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_extension_identifier : public Rule
{
public:
  Rule_extension_identifier(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_extension_identifier(const Rule_extension_identifier& rule);

  Rule_extension_identifier& operator=(const Rule_extension_identifier& rule);

  const Rule_extension_identifier* clone(void) const;

  static const Rule_extension_identifier* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
