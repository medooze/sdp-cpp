/* -----------------------------------------------------------------------------
 * Rule_key_mki_length.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_mki_length_hpp
#define Rule_key_mki_length_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_mki_length : public Rule
{
public:
  Rule_key_mki_length(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_mki_length(const Rule_key_mki_length& rule);

  Rule_key_mki_length& operator=(const Rule_key_mki_length& rule);

  const Rule_key_mki_length* clone(void) const;

  static const Rule_key_mki_length* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
