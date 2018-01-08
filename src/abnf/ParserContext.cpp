/* -----------------------------------------------------------------------------
 * ParserContext.cpp
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

#include <iostream>
using std::cout;
using std::endl;

#include <regex>
using std::regex;

#include "ParserContext.hpp"

using namespace abnf;

ParserContext::ParserContext(const string& text, bool traceOn) :
text(text), index(0), errorIndex(0), level(0), traceOn(traceOn)
{
}

ParserContext::~ParserContext()
{
}

void ParserContext::push(const string& rulename)
{
  push(rulename, "");
}

void ParserContext::push(const string& rulename, const string& trace)
{
  callStack.push_back(rulename);
  startStack.push_back(index);

  if (traceOn)
  {
    string sample = text.substr(index, (index + 10 > text.length() ? text.length() - index : 10));

    regex rx("[\\x00-\\x1F]");
    sample = regex_replace(sample, rx, string(" "));

    cout << "-> " << ++level << ": " << rulename << "(" << trace << ")" << endl;
    cout << index << ": " << sample << endl;
  }
}

void ParserContext::pop(const string& function, bool result)
{
  unsigned int start = startStack.back();
  startStack.pop_back();
  callStack.pop_back();

  if (traceOn)
  {
    cout << "<- " << level--
         << ": " << function
         << "(" << (result ? "true" : "false")
         << ",s=" << start
         << ",l=" << (index - start)
         << ",e=" << errorIndex
         << ")" << endl;
  }

  if (!result)
  {
    if (index > errorIndex)
    {
      errorIndex = index;
      errorStack.clear();
      errorStack = callStack;
    }
    else if (index == errorIndex && errorStack.empty())
    {
      errorStack = callStack;
    }
  }
  else
  {
    if (index > errorIndex) errorIndex = 0;
  }
}

const vector<string>& ParserContext::getErrorStack() const
{
  return errorStack;
}

unsigned int ParserContext::getErrorIndex() const
{
  return errorIndex;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
