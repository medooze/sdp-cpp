/* -----------------------------------------------------------------------------
 * Rule_key_salt.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_salt_hpp
#define Rule_key_salt_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_salt : public Rule
{
public:
  Rule_key_salt(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_salt(const Rule_key_salt& rule);

  Rule_key_salt& operator=(const Rule_key_salt& rule);

  const Rule_key_salt* clone(void) const;

  static const Rule_key_salt* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
