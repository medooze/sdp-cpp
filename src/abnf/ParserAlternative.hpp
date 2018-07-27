/* -----------------------------------------------------------------------------
 * ParserAlternative.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef ParserAlternative_hpp
#define ParserAlternative_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class ParserAlternative
{
public:
  std::vector<Rule*> rules;
  unsigned int start;
  unsigned int end;

  ParserAlternative(unsigned int start);
  ParserAlternative(const ParserAlternative& alternative);

  ParserAlternative& operator=(const ParserAlternative& alternative);

  ~ParserAlternative();

  void add(Rule* rule, unsigned int end);
  void add(const std::vector<Rule*>& rules, unsigned int end);

  static const ParserAlternative* getBest(vector<const ParserAlternative*> alternatives);
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
