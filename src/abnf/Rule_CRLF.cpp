/* -----------------------------------------------------------------------------
 * Rule_CRLF.cpp
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

#include "Rule_CRLF.hpp"
#include "Visitor.hpp"
#include "ParserAlternative.hpp"
#include "ParserContext.hpp"

#include "Terminal_NumericValue.hpp"

using namespace abnf;

Rule_CRLF::Rule_CRLF(
  const string& spelling, 
  const vector<Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_CRLF::Rule_CRLF(const Rule_CRLF& rule) : Rule(rule)
{
}

Rule_CRLF& Rule_CRLF::operator=(const Rule_CRLF& rule)
{
  Rule::operator=(rule);
  return *this;
}

Rule* Rule_CRLF::clone() const
{
  return new Rule_CRLF(this->spelling, this->rules);
}

void* Rule_CRLF::accept(Visitor& visitor)
{
  return visitor.visit(this);
}

Rule_CRLF* Rule_CRLF::parse(ParserContext& context)
{
  context.push("CRLF");
  
  bool parsed = false;

  size_t length = 2;
  
  const Rule* rule = NULL;

  try
  {
    if (context.index + length <= context.text.length())
    {
      string value = context.text.substr(context.index, length);
      
      parsed = (value=="\r\n");

      if (parsed)
      {
        context.index += length;
        rule = new Rule_CRLF(value, vector<Rule*>());
      }
    }
  }
  catch (...) {}

  context.pop("CRLF", parsed);

  return (Rule_CRLF*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
