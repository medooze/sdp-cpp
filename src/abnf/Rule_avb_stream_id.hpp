/* -----------------------------------------------------------------------------
 * Rule_avb_stream_id.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_avb_stream_id_hpp
#define Rule_avb_stream_id_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_avb_stream_id : public Rule
{
public:
  Rule_avb_stream_id(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_avb_stream_id(const Rule_avb_stream_id& rule);

  Rule_avb_stream_id& operator=(const Rule_avb_stream_id& rule);

  virtual Rule* clone(void) const;

  static Rule_avb_stream_id* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
