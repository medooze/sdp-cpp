/* -----------------------------------------------------------------------------
 * Rule_fingerprint.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
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
  Rule_fingerprint(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_fingerprint(const Rule_fingerprint& rule);

  Rule_fingerprint& operator=(const Rule_fingerprint& rule);

  const Rule_fingerprint* clone(void) const;

  static const Rule_fingerprint* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
