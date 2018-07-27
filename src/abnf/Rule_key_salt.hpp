/* -----------------------------------------------------------------------------
 * Rule_key_salt.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_salt_hpp
#define Rule_key_salt_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_salt : public Rule
{
public:
  Rule_key_salt(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_key_salt(const Rule_key_salt& rule);

  Rule_key_salt& operator=(const Rule_key_salt& rule);

  virtual Rule* clone(void) const;

  static Rule_key_salt* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
