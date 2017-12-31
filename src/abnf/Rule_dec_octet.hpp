/* -----------------------------------------------------------------------------
 * Rule_dec_octet.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_dec_octet_hpp
#define Rule_dec_octet_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_dec_octet : public Rule
{
public:
  Rule_dec_octet(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_dec_octet(const Rule_dec_octet& rule);

  Rule_dec_octet& operator=(const Rule_dec_octet& rule);

  const Rule_dec_octet* clone(void) const;

  static const Rule_dec_octet* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
