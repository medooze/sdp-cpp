/* -----------------------------------------------------------------------------
 * Rule_proto_version.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_proto_version_hpp
#define Rule_proto_version_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_proto_version : public Rule
{
public:
  Rule_proto_version(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_proto_version(const Rule_proto_version& rule);

  Rule_proto_version& operator=(const Rule_proto_version& rule);

  virtual Rule* clone(void) const;

  static Rule_proto_version* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
