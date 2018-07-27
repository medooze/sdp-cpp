/* -----------------------------------------------------------------------------
 * Rule_sess_id.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_sess_id_hpp
#define Rule_sess_id_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_sess_id : public Rule
{
public:
  Rule_sess_id(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_sess_id(const Rule_sess_id& rule);

  Rule_sess_id& operator=(const Rule_sess_id& rule);

  virtual Rule* clone(void) const;

  static Rule_sess_id* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
