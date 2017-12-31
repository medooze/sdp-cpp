/* -----------------------------------------------------------------------------
 * Rule_comment.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_comment_hpp
#define Rule_comment_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_comment : public Rule
{
public:
  Rule_comment(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_comment(const Rule_comment& rule);

  Rule_comment& operator=(const Rule_comment& rule);

  const Rule_comment* clone(void) const;

  static const Rule_comment* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
