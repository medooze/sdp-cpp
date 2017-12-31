/* -----------------------------------------------------------------------------
 * Rule_path_rootless.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_path_rootless_hpp
#define Rule_path_rootless_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_path_rootless : public Rule
{
public:
  Rule_path_rootless(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_path_rootless(const Rule_path_rootless& rule);

  Rule_path_rootless& operator=(const Rule_path_rootless& rule);

  const Rule_path_rootless* clone(void) const;

  static const Rule_path_rootless* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
