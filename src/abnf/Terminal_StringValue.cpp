/* -----------------------------------------------------------------------------
 * Terminal_StringValue.cpp
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

#include "Terminal_StringValue.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

using namespace abnf;

Terminal_StringValue::Terminal_StringValue(
  const string& spelling, 
  const vector<Rule*>& rules) : Rule(spelling, rules)
{
}

Rule* Terminal_StringValue::clone(void) const
{
  return new Terminal_StringValue(this->spelling, this->rules);
}

void* Terminal_StringValue::accept(Visitor& visitor)
{
  return visitor.visit(this);
}

Terminal_StringValue* Terminal_StringValue::parse(
  ParserContext& context,
  const string& pattern)
{
  context.push("StringValue", pattern);

  bool parsed = false;

  Terminal_StringValue* stringValue = NULL;

  try
  {
    if (context.index + pattern.length() <= context.text.length())
    {
      string value = context.text.substr(context.index, pattern.length());

      parsed = value.compare(pattern) == 0;

      if (parsed)
      {
        context.index += pattern.length();
        stringValue = new Terminal_StringValue(value, vector<Rule*>());
      }
    }
  }
  catch (...) {}

  context.pop("StringValue", parsed);

  return stringValue;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
