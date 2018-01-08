/* -----------------------------------------------------------------------------
 * ParserException.cpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <exception>
using std::exception;

#include <regex>
using std::regex;

#include "ParserException.hpp"

using namespace abnf;

ParserException::ParserException(
  const string& reason,
  const string& text,
  unsigned int index,
  const vector<string>& ruleStack) : 
  reason(reason),
  ruleStack(ruleStack),
  cause(NULL)
{
  unsigned int start = (index < 30) ? 0: index - 30;
  unsigned int end = (text.length() < index + 30) ? text.length(): index + 30;
  text60 = text.substr(start, end - start);
  index60 = (index < 30) ? index : 30;

  regex rx("[\\x00-\\x1F]");
  text60 = regex_replace(text60, rx, string(" "));
}

ParserException::ParserException(const ParserException& exception) :
  reason(exception.reason),
  text60(exception.text60),
  index60(exception.index60),
  ruleStack(exception.ruleStack),
  cause(NULL)
{
  if (exception.cause != NULL)
    cause = new ParserException(*exception.cause);
}

ParserException& ParserException::operator=(const ParserException& exception)
{
  if (&exception != this)
  {
    reason = exception.reason;
    text60 = exception.text60;
    index60 = exception.index60;
    ruleStack = exception.ruleStack;

    delete cause;
    cause = NULL;
    if (exception.cause != NULL)
      cause = new ParserException(*exception.cause);
  }

  return *this;
}

ParserException::~ParserException() throw()
{
  delete cause;
}

const string& ParserException::getReason(void) const
{
  return reason;
}

const string& ParserException::getSubstring(void) const
{
  return text60;
}

unsigned int ParserException::getSubstringIndex(void) const
{
  return index60;
}

const vector<string>& ParserException::getRuleStack(void) const
{
  return ruleStack;
}

const char* ParserException::what(void) throw()
{
  string marker("                              ");

  message = reason + "\n";
  message += text60 + "\n";
  message += marker.substr(0, index60) + "^\n";

  if (!ruleStack.empty())
  {
    message += "rule stack:\n";

    vector<string>::const_iterator s;
    for (s = ruleStack.begin(); s != ruleStack.end(); s++)
      message += "  " + *s + "\n";
  }

  if (cause != NULL)
  {
    message += "possible cause: ";
    message += cause->what();
  }

  return message.c_str();
}

void ParserException::setCause(const ParserException& cause)
{
  delete this->cause;

  this->cause = new ParserException(cause);
}

const ParserException* ParserException::getCause(void) const
{
  return cause;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
