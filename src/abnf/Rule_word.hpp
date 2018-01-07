/* -----------------------------------------------------------------------------
 * Rule_word.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_word_hpp
#define Rule_word_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_word : public Rule
{
public:
  Rule_word(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_word(const Rule_word& rule);

  Rule_word& operator=(const Rule_word& rule);

  const Rule_word* clone(void) const;

  static const Rule_word* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
