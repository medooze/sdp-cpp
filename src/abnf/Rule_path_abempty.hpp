/* -----------------------------------------------------------------------------
 * Rule_path_abempty.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_path_abempty_hpp
#define Rule_path_abempty_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_path_abempty : public Rule
{
public:
  Rule_path_abempty(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_path_abempty(const Rule_path_abempty& rule);

  Rule_path_abempty& operator=(const Rule_path_abempty& rule);

  const Rule_path_abempty* clone(void) const;

  static const Rule_path_abempty* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
