/* -----------------------------------------------------------------------------
 * Rule_base64.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_base64_hpp
#define Rule_base64_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_base64 : public Rule
{
public:
  Rule_base64(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_base64(const Rule_base64& rule);

  Rule_base64& operator=(const Rule_base64& rule);

  const Rule_base64* clone(void) const;

  static const Rule_base64* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
