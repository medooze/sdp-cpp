/* -----------------------------------------------------------------------------
 * Rule_session_name_field.cpp
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

#include "Rule_session_name_field.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_text.hpp"
#include "Rule_CRLF.hpp"
#include "Terminal_NumericValue.hpp"
#include "Terminal_StringValue.hpp"

using namespace abnf;

Rule_session_name_field::Rule_session_name_field(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_session_name_field::Rule_session_name_field(const Rule_session_name_field& rule) : Rule(rule)
{
}

Rule_session_name_field& Rule_session_name_field::operator=(const Rule_session_name_field& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_session_name_field* Rule_session_name_field::clone() const
{
  return new Rule_session_name_field(this->spelling, this->rules);
}

void* Rule_session_name_field::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_session_name_field* Rule_session_name_field::parse(ParserContext& context)
{
  context.push("session-name-field");

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
          rule = Terminal_NumericValue::parse(context, "%x73", "[\\x73]", 1);
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
          rule = Rule_text::parse(context);
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
    rule = new Rule_session_name_field(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("session-name-field", parsed);

  return (Rule_session_name_field*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
