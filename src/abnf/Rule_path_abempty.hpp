/* -----------------------------------------------------------------------------
 * Rule_path_abempty.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_path_abempty_hpp
#define Rule_path_abempty_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_path_abempty : public Rule
{
public:
  Rule_path_abempty(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_path_abempty(const Rule_path_abempty& rule);

  Rule_path_abempty& operator=(const Rule_path_abempty& rule);

  virtual Rule* clone(void) const;

  static Rule_path_abempty* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
