/* -----------------------------------------------------------------------------
 * Rule_host.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_host_hpp
#define Rule_host_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_host : public Rule
{
public:
  Rule_host(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_host(const Rule_host& rule);

  Rule_host& operator=(const Rule_host& rule);

  const Rule_host* clone(void) const;

  static const Rule_host* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
