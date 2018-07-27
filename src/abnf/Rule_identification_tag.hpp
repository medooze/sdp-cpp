/* -----------------------------------------------------------------------------
 * Rule_identification_tag.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_identification_tag_hpp
#define Rule_identification_tag_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_identification_tag : public Rule
{
public:
  Rule_identification_tag(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_identification_tag(const Rule_identification_tag& rule);

  Rule_identification_tag& operator=(const Rule_identification_tag& rule);

  virtual Rule* clone(void) const;

  static Rule_identification_tag* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
