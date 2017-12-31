/* -----------------------------------------------------------------------------
 * Rule_session_description.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_session_description_hpp
#define Rule_session_description_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_session_description : public Rule
{
public:
  Rule_session_description(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_session_description(const Rule_session_description& rule);

  Rule_session_description& operator=(const Rule_session_description& rule);

  const Rule_session_description* clone(void) const;

  static const Rule_session_description* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
