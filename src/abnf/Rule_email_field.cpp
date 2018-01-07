/* -----------------------------------------------------------------------------
 * Rule_email_field.cpp
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

#include "Rule_email_field.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_CRLF.hpp"
#include "Terminal_NumericValue.hpp"
#include "Terminal_StringValue.hpp"
#include "Rule_email_address.hpp"

using namespace abnf;

Rule_email_field::Rule_email_field(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_email_field::Rule_email_field(const Rule_email_field& rule) : Rule(rule)
{
}

Rule_email_field& Rule_email_field::operator=(const Rule_email_field& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_email_field* Rule_email_field::clone() const
{
  return new Rule_email_field(this->spelling, this->rules);
}

void* Rule_email_field::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_email_field* Rule_email_field::parse(ParserContext& context)
{
  context.push("email-field");

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
          rule = Terminal_NumericValue::parse(context, "%x65", "[\\x65]", 1);
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
          rule = Rule_email_address::parse(context);
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
    rule = new Rule_email_field(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("email-field", parsed);

  return (Rule_email_field*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
