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
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

const Terminal_NumericValue* Terminal_NumericValue::clone(void) const
{
  return new Terminal_NumericValue(this->spelling, this->rules);
}

void* Terminal_NumericValue::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Terminal_NumericValue* Terminal_NumericValue::parse(
	ParserContext& context,
	const string& spelling,
	uint8_t val,
	int length)
{
  return parse(context, spelling, val, val, length);
}

const Terminal_NumericValue* Terminal_NumericValue::parse(
  ParserContext& context,
  const string& spelling,
  uint8_t from,
  uint8_t to,
  int length)
{
  context.push("NumericValue", spelling);

  bool parsed = false;

  Terminal_NumericValue* numericValue = NULL;

  try
  {
    if (context.index + 1 <= context.text.length())
    {
      string value = context.text.substr(context.index, 1);

      parsed = (from<=value.c_str()[0] && value.c_str()[0]<=to);
      
      if (parsed)
      {
        context.index ++;
        numericValue = new Terminal_NumericValue(value, vector<const Rule*>());
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
