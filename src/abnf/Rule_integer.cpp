/* -----------------------------------------------------------------------------
 * Rule_integer.cpp
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

#include "Rule_integer.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_DIGIT.hpp"
#include "Rule_POS_DIGIT.hpp"

using namespace abnf;

Rule_integer::Rule_integer(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_integer::Rule_integer(const Rule_integer& rule) : Rule(rule)
{
}

Rule_integer& Rule_integer::operator=(const Rule_integer& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_integer* Rule_integer::clone() const
{
  return new Rule_integer(this->spelling, this->rules);
}

void* Rule_integer::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_integer* Rule_integer::parse(ParserContext& context)
{
  context.push("integer");

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
          rule = Rule_POS_DIGIT::parse(context);
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
        for (int i1 = 0; f1; i1++)
        {
          rule = Rule_DIGIT::parse(context);
          if ((f1 = rule != NULL))
          {
            e1.push_back(rule);
            c1++;
          }
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
    rule = new Rule_integer(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("integer", parsed);

  return (Rule_integer*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
