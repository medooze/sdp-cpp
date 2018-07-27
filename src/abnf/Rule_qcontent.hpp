/* -----------------------------------------------------------------------------
 * Rule_qcontent.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_qcontent_hpp
#define Rule_qcontent_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_qcontent : public Rule
{
public:
  Rule_qcontent(const std::string& spelling, const std::vector<Rule*>& rules);
  Rule_qcontent(const Rule_qcontent& rule);

  Rule_qcontent& operator=(const Rule_qcontent& rule);

  virtual Rule* clone(void) const;

  static Rule_qcontent* parse(ParserContext& context);

  virtual void* accept(Visitor& visitor);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
