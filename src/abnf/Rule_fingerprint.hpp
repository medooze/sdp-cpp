/* -----------------------------------------------------------------------------
 * Rule_fingerprint.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_fingerprint_hpp
#define Rule_fingerprint_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_fingerprint : public Rule
{
public:
  Rule_fingerprint(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_fingerprint(const Rule_fingerprint& rule);

  Rule_fingerprint& operator=(const Rule_fingerprint& rule);

  virtual Rule* clone(void) const;

  static Rule_fingerprint* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
