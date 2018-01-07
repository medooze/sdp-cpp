/* -----------------------------------------------------------------------------
 * Rule_CTL.cpp
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

#include "Rule_CTL.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Terminal_NumericValue.hpp"

using namespace abnf;

Rule_CTL::Rule_CTL(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_CTL::Rule_CTL(const Rule_CTL& rule) : Rule(rule)
{
}

Rule_CTL& Rule_CTL::operator=(const Rule_CTL& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_CTL* Rule_CTL::clone() const
{
  return new Rule_CTL(this->spelling, this->rules);
}

void* Rule_CTL::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_CTL* Rule_CTL::parse(ParserContext& context)
{
  context.push("CTL");

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
          rule = Terminal_NumericValue::parse(context, "%x00-1F", "[\\x00-\\x1F]", 1);
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
          rule = Terminal_NumericValue::parse(context, "%x7F", "[\\x7F]", 1);
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
    rule = new Rule_CTL(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("CTL", parsed);

  return (Rule_CTL*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
