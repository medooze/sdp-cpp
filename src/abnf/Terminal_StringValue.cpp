/* -----------------------------------------------------------------------------
 * Terminal_StringValue.cpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
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
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

const Terminal_StringValue* Terminal_StringValue::clone(void) const
{
  return new Terminal_StringValue(this->spelling, this->rules);
}

void* Terminal_StringValue::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Terminal_StringValue* Terminal_StringValue::parse(
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
        stringValue = new Terminal_StringValue(value, vector<const Rule*>());
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
