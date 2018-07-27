/* -----------------------------------------------------------------------------
 * Parser.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Parser_hpp
#define Parser_hpp

#include <string>
#include <iostream>

namespace abnf {

class Rule;

class Parser
{
public:
  static Rule* parse(const std::string& rulename, const std::string& text);
  static Rule* parse(const std::string& rulename, std::istream& in);

  static Rule* parse(const std::string& rulename, const std::string& text, bool trace);
  static Rule* parse(const std::string& rulename, std::istream& in, bool trace);
};

}

#endif

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
