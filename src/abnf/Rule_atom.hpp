/* -----------------------------------------------------------------------------
 * Rule_atom.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_atom_hpp
#define Rule_atom_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_atom : public Rule
{
public:
  Rule_atom(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_atom(const Rule_atom& rule);

  Rule_atom& operator=(const Rule_atom& rule);

  virtual Rule* clone(void) const;

  static Rule_atom* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
