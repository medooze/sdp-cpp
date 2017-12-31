/* -----------------------------------------------------------------------------
 * Rule_ctext.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ctext_hpp
#define Rule_ctext_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ctext : public Rule
{
public:
  Rule_ctext(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_ctext(const Rule_ctext& rule);

  Rule_ctext& operator=(const Rule_ctext& rule);

  const Rule_ctext* clone(void) const;

  static const Rule_ctext* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
