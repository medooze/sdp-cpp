/* -----------------------------------------------------------------------------
 * Terminal_NumericValue.cpp
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

#include <regex>
using std::regex;

#include "Terminal_NumericValue.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

using namespace abnf;

Terminal_NumericValue::Terminal_NumericValue(
  const string& spelling, 
  const vector<Rule*>& rules) : Rule(spelling, rules)
{
}

Rule* Terminal_NumericValue::clone(void) const
{
  return new Terminal_NumericValue(this->spelling, this->rules);
}

void* Terminal_NumericValue::accept(Visitor& visitor)
{
  return visitor.visit(this);
}

Terminal_NumericValue* Terminal_NumericValue::parse(
  ParserContext& context,
  const string& spelling,
  uint8_t from,
  uint8_t to)
{
  context.push("NumericValue", spelling );

  bool parsed = false;

  Terminal_NumericValue* numericValue = NULL;

  try
  {
    if (context.index + 1 <= context.text.length())
    {
      char value = context.text.at(context.index);

      parsed = (from<=value && value<=to);

      if (parsed)
      {
        context.index += 1;
        numericValue = new Terminal_NumericValue(string(1,value), vector<Rule*>());
      }
    }
  }
  catch (...) {}

  context.pop("NumericValue", parsed);

  return numericValue;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
