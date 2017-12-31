/* -----------------------------------------------------------------------------
 * Rule_sess_version.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_sess_version_hpp
#define Rule_sess_version_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_sess_version : public Rule
{
public:
  Rule_sess_version(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_sess_version(const Rule_sess_version& rule);

  Rule_sess_version& operator=(const Rule_sess_version& rule);

  const Rule_sess_version* clone(void) const;

  static const Rule_sess_version* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
