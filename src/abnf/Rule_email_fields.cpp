/* -----------------------------------------------------------------------------
 * Rule_email_fields.cpp
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

#include "Rule_email_fields.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_email_field.hpp"

using namespace abnf;

Rule_email_fields::Rule_email_fields(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_email_fields::Rule_email_fields(const Rule_email_fields& rule) : Rule(rule)
{
}

Rule_email_fields& Rule_email_fields::operator=(const Rule_email_fields& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_email_fields* Rule_email_fields::clone() const
{
  return new Rule_email_fields(this->spelling, this->rules);
}

void* Rule_email_fields::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_email_fields* Rule_email_fields::parse(ParserContext& context)
{
  context.push("email-fields");

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
        for (int i1 = 0; f1; i1++)
        {
          unsigned int g1 = context.index;
          parsed = false;
          if (!parsed)
          {
            {
              vector<const Rule*> e2;
              int s2 = context.index;
              parsed = true;
              if (parsed)
              {
                bool f2 = true;
                int c2 = 0;
                for (int i2 = 0; i2 < 1 && f2; i2++)
                {
                  rule = Rule_email_field::parse(context);
                  if ((f2 = rule != NULL))
                  {
                    e2.push_back(rule);
                    c2++;
                  }
                }
                parsed = c2 == 1;
              }
              if (parsed)
                e1.insert(e1.end(), e2.begin(), e2.end());
              else
                context.index = s2;
            }
          }
          if (context.index > g1) c1++;
          f1 = c1 > i1;
        }
        parsed = true;
      }
      if (parsed)
        e0.insert(e0.end(), e1.begin(), e1.end());
      else
        context.index = s1;
    }
  }

  rule = NULL;
  if (parsed)
    rule = new Rule_email_fields(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("email-fields", parsed);

  return (Rule_email_fields*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
