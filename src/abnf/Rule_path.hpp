/* -----------------------------------------------------------------------------
 * Rule_path.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_path_hpp
#define Rule_path_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_path : public Rule
{
public:
  Rule_path(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_path(const Rule_path& rule);

  Rule_path& operator=(const Rule_path& rule);

  const Rule_path* clone(void) const;

  static const Rule_path* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
