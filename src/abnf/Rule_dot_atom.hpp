/* -----------------------------------------------------------------------------
 * Rule_dot_atom.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_dot_atom_hpp
#define Rule_dot_atom_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_dot_atom : public Rule
{
public:
  Rule_dot_atom(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_dot_atom(const Rule_dot_atom& rule);

  Rule_dot_atom& operator=(const Rule_dot_atom& rule);

  const Rule_dot_atom* clone(void) const;

  static const Rule_dot_atom* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
