/* -----------------------------------------------------------------------------
 * Rule_hash_func.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_hash_func_hpp
#define Rule_hash_func_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_hash_func : public Rule
{
public:
  Rule_hash_func(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_hash_func(const Rule_hash_func& rule);

  Rule_hash_func& operator=(const Rule_hash_func& rule);

  const Rule_hash_func* clone(void) const;

  static const Rule_hash_func* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
