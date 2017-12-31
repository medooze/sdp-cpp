/* -----------------------------------------------------------------------------
 * Rule_extension_attributes.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_extension_attributes_hpp
#define Rule_extension_attributes_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_extension_attributes : public Rule
{
public:
  Rule_extension_attributes(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_extension_attributes(const Rule_extension_attributes& rule);

  Rule_extension_attributes& operator=(const Rule_extension_attributes& rule);

  const Rule_extension_attributes* clone(void) const;

  static const Rule_extension_attributes* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
