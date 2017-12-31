/* -----------------------------------------------------------------------------
 * Rule_fingerprint_attribute.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
  Rule_fingerprint_attribute(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_fingerprint_attribute(const Rule_fingerprint_attribute& rule);

  Rule_fingerprint_attribute& operator=(const Rule_fingerprint_attribute& rule);

  const Rule_fingerprint_attribute* clone(void) const;

  static const Rule_fingerprint_attribute* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
