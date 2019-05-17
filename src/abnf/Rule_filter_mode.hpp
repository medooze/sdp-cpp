/* -----------------------------------------------------------------------------
 * Rule_filter_mode.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_filter_mode_hpp
#define Rule_filter_mode_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_filter_mode : public Rule
{
public:
  Rule_filter_mode(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_filter_mode(const Rule_filter_mode& rule);

  Rule_filter_mode& operator=(const Rule_filter_mode& rule);

  virtual Rule* clone(void) const;

  static Rule_filter_mode* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
