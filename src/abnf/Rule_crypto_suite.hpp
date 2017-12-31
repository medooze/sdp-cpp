/* -----------------------------------------------------------------------------
 * Rule_crypto_suite.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
  Rule_crypto_suite(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_crypto_suite(const Rule_crypto_suite& rule);

  Rule_crypto_suite& operator=(const Rule_crypto_suite& rule);

  const Rule_crypto_suite* clone(void) const;

  static const Rule_crypto_suite* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
