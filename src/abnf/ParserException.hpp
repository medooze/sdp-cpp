/* -----------------------------------------------------------------------------
 * ParserException.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef ParserException_hpp
#define ParserException_hpp

#include <iostream>
#include <vector>
#include <exception>

namespace abnf {

class ParserException : public std::exception
{
public:
  ParserException(
    const std::string& reason,
    const std::string& text,
    unsigned int index,
    const std::vector<std::string>& ruleStack);

  ParserException(const ParserException& exception);

  ParserException& operator=(const ParserException& exception);

  virtual ~ParserException() throw();

  const std::string& getReason(void) const;
  const std::string& getSubstring(void) const;
  unsigned int getSubstringIndex(void) const;
  const std::vector<std::string>& getRuleStack(void) const;

  const char* what() throw();

  void setCause(const ParserException& cause);
  const ParserException* getCause(void) const;

private:
  std::string reason;
  std::string text60;
  unsigned int index60;
  std::vector<std::string> ruleStack;
  std::string message;

  ParserException* cause;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
