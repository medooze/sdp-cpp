/* -----------------------------------------------------------------------------
 * Parser.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
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
  static const Rule* parse(const std::string& rulename, const std::string& text);
  static const Rule* parse(const std::string& rulename, std::istream& in);

  static const Rule* parse(const std::string& rulename, const std::string& text, bool trace);
  static const Rule* parse(const std::string& rulename, std::istream& in, bool trace);
};

}

#endif

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
