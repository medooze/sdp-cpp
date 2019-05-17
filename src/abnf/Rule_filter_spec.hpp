/* -----------------------------------------------------------------------------
 * Rule_filter_spec.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_filter_spec_hpp
#define Rule_filter_spec_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_filter_spec : public Rule
{
public:
  Rule_filter_spec(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_filter_spec(const Rule_filter_spec& rule);

  Rule_filter_spec& operator=(const Rule_filter_spec& rule);

  virtual Rule* clone(void) const;

  static Rule_filter_spec* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
