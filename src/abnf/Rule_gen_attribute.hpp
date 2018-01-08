/* -----------------------------------------------------------------------------
 * Rule_gen_attribute.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_gen_attribute_hpp
#define Rule_gen_attribute_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_gen_attribute : public Rule
{
public:
  Rule_gen_attribute(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_gen_attribute(const Rule_gen_attribute& rule);

  Rule_gen_attribute& operator=(const Rule_gen_attribute& rule);

  const Rule_gen_attribute* clone(void) const;

  static const Rule_gen_attribute* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
