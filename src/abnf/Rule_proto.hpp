/* -----------------------------------------------------------------------------
 * Rule_proto.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_proto_hpp
#define Rule_proto_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_proto : public Rule
{
public:
  Rule_proto(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_proto(const Rule_proto& rule);

  Rule_proto& operator=(const Rule_proto& rule);

  virtual Rule* clone(void) const;

  static Rule_proto* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
