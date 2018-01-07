/* -----------------------------------------------------------------------------
 * Terminal_NumericValue.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Terminal_NumericValue_hpp
#define Terminal_NumericValue_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Terminal_NumericValue : public Rule
{
public:
  Terminal_NumericValue(
    const std::string& spelling, 
    const std::vector<const Rule*>& rules);

  const Terminal_NumericValue* clone(void) const;

  static const Terminal_NumericValue* parse(
    ParserContext& context,
    const std::string& spelling,
    const std::string& pattern,
    int length);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
