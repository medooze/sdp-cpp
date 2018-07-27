/* -----------------------------------------------------------------------------
 * Rule_fingerprint_attribute.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_fingerprint_attribute_hpp
#define Rule_fingerprint_attribute_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_fingerprint_attribute : public Rule
{
public:
  Rule_fingerprint_attribute(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_fingerprint_attribute(const Rule_fingerprint_attribute& rule);

  Rule_fingerprint_attribute& operator=(const Rule_fingerprint_attribute& rule);

  virtual Rule* clone(void) const;

  static Rule_fingerprint_attribute* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
