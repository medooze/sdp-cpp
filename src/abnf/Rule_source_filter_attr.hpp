/* -----------------------------------------------------------------------------
 * Rule_source_filter_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_source_filter_attr_hpp
#define Rule_source_filter_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_source_filter_attr : public Rule
{
public:
  Rule_source_filter_attr(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_source_filter_attr(const Rule_source_filter_attr& rule);

  Rule_source_filter_attr& operator=(const Rule_source_filter_attr& rule);

  virtual Rule* clone(void) const;

  static Rule_source_filter_attr* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
