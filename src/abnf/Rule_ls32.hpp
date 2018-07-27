/* -----------------------------------------------------------------------------
 * Rule_ls32.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ls32_hpp
#define Rule_ls32_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ls32 : public Rule
{
public:
  Rule_ls32(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_ls32(const Rule_ls32& rule);

  Rule_ls32& operator=(const Rule_ls32& rule);

  virtual Rule* clone(void) const;

  static Rule_ls32* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
