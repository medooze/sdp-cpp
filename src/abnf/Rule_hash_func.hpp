/* -----------------------------------------------------------------------------
 * Rule_hash_func.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
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
