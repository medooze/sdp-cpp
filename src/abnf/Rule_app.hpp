/* -----------------------------------------------------------------------------
 * Rule_app.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_app_hpp
#define Rule_app_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_app : public Rule
{
public:
  Rule_app(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_app(const Rule_app& rule);

  Rule_app& operator=(const Rule_app& rule);

  const Rule_app* clone(void) const;

  static const Rule_app* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
