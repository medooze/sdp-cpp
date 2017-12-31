/* -----------------------------------------------------------------------------
 * Rule_gen_delims.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_gen_delims_hpp
#define Rule_gen_delims_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_gen_delims : public Rule
{
public:
  Rule_gen_delims(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_gen_delims(const Rule_gen_delims& rule);

  Rule_gen_delims& operator=(const Rule_gen_delims& rule);

  const Rule_gen_delims* clone(void) const;

  static const Rule_gen_delims* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
