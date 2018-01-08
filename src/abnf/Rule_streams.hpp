/* -----------------------------------------------------------------------------
 * Rule_streams.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_streams_hpp
#define Rule_streams_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_streams : public Rule
{
public:
  Rule_streams(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_streams(const Rule_streams& rule);

  Rule_streams& operator=(const Rule_streams& rule);

  const Rule_streams* clone(void) const;

  static const Rule_streams* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
