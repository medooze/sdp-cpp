/* -----------------------------------------------------------------------------
 * Rule_ls32.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_ls32_hpp
#define Rule_ls32_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_ls32 : public Rule
{
public:
  Rule_ls32(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_ls32(const Rule_ls32& rule);

  Rule_ls32& operator=(const Rule_ls32& rule);

  const Rule_ls32* clone(void) const;

  static const Rule_ls32* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
