/* -----------------------------------------------------------------------------
 * Rule_dot_atom.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
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
  Rule_dot_atom(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_dot_atom(const Rule_dot_atom& rule);

  Rule_dot_atom& operator=(const Rule_dot_atom& rule);

  virtual Rule* clone(void) const;

  static Rule_dot_atom* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
