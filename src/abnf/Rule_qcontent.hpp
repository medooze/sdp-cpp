/* -----------------------------------------------------------------------------
 * Rule_qcontent.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
  Rule_qcontent(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_qcontent(const Rule_qcontent& rule);

  Rule_qcontent& operator=(const Rule_qcontent& rule);

  const Rule_qcontent* clone(void) const;

  static const Rule_qcontent* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
