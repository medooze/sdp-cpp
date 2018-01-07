/* -----------------------------------------------------------------------------
 * Rule_dot_atom_text.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_dot_atom_text_hpp
#define Rule_dot_atom_text_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_dot_atom_text : public Rule
{
public:
  Rule_dot_atom_text(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_dot_atom_text(const Rule_dot_atom_text& rule);

  Rule_dot_atom_text& operator=(const Rule_dot_atom_text& rule);

  const Rule_dot_atom_text* clone(void) const;

  static const Rule_dot_atom_text* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
