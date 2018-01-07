/* -----------------------------------------------------------------------------
 * Rule_key_mki.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_mki_hpp
#define Rule_key_mki_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_mki : public Rule
{
public:
  Rule_key_mki(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_mki(const Rule_key_mki& rule);

  Rule_key_mki& operator=(const Rule_key_mki& rule);

  const Rule_key_mki* clone(void) const;

  static const Rule_key_mki* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
