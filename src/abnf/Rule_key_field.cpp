/* -----------------------------------------------------------------------------
 * Rule_key_field.cpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Rule_key_field.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_CRLF.hpp"
#include "Rule_key_type.hpp"
#include "Terminal_NumericValue.hpp"
#include "Terminal_StringValue.hpp"

using namespace abnf;

Rule_key_field::Rule_key_field(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_key_field::Rule_key_field(const Rule_key_field& rule) : Rule(rule)
{
}

Rule_key_field& Rule_key_field::operator=(const Rule_key_field& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_key_field* Rule_key_field::clone() const
{
  return new Rule_key_field(this->spelling, this->rules);
}

void* Rule_key_field::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_key_field* Rule_key_field::parse(ParserContext& context)
{
  context.push("key-field");

  bool parsed = true;
  int s0 = context.index;
  vector<const Rule*> e0;
  const Rule* rule;

  parsed = false;
  if (!parsed)
  {
    {
      vector<const Rule*> e1;
      int s1 = context.index;
      parsed = true;
      if (parsed)
      {
        bool f1 = true;
        int c1 = 0;
        for (int i1 = 0; i1 < 1 && f1; i1++)
        {
          rule = Terminal_NumericValue::parse(context, "%x6b", "[\\x6b]", 1);
          if ((f1 = rule != NULL))
          {
            e1.push_back(rule);
            c1++;
          }
        }
        parsed = c1 == 1;
      }
      if (parsed)
      {
        bool f1 = true;
        int c1 = 0;
        for (int i1 = 0; i1 < 1 && f1; i1++)
        {
          rule = Terminal_StringValue::parse(context, "=");
          if ((f1 = rule != NULL))
          {
            e1.push_back(rule);
            c1++;
          }
        }
        parsed = c1 == 1;
      }
      if (parsed)
      {
        bool f1 = true;
        int c1 = 0;
        for (int i1 = 0; i1 < 1 && f1; i1++)
        {
          rule = Rule_key_type::parse(context);
          if ((f1 = rule != NULL))
          {
            e1.push_back(rule);
            c1++;
          }
        }
        parsed = c1 == 1;
      }
      if (parsed)
      {
        bool f1 = true;
        int c1 = 0;
        for (int i1 = 0; i1 < 1 && f1; i1++)
        {
          rule = Rule_CRLF::parse(context);
          if ((f1 = rule != NULL))
          {
            e1.push_back(rule);
            c1++;
          }
        }
        parsed = c1 == 1;
      }
      if (parsed)
        e0.insert(e0.end(), e1.begin(), e1.end());
      else
        context.index = s1;
    }
  }

  rule = NULL;
  if (parsed)
    rule = new Rule_key_field(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("key-field", parsed);

  return (Rule_key_field*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
