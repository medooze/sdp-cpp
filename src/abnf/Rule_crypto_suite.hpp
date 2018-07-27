/* -----------------------------------------------------------------------------
 * Rule_crypto_suite.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_crypto_suite_hpp
#define Rule_crypto_suite_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_crypto_suite : public Rule
{
public:
  Rule_crypto_suite(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_crypto_suite(const Rule_crypto_suite& rule);

  Rule_crypto_suite& operator=(const Rule_crypto_suite& rule);

  virtual Rule* clone(void) const;

  static Rule_crypto_suite* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
