/* -----------------------------------------------------------------------------
 * Rule_CR.cpp
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

#include "Rule_CR.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Terminal_NumericValue.hpp"

using namespace abnf;

Rule_CR::Rule_CR(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_CR::Rule_CR(const Rule_CR& rule) : Rule(rule)
{
}

Rule_CR& Rule_CR::operator=(const Rule_CR& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_CR* Rule_CR::clone() const
{
  return new Rule_CR(this->spelling, this->rules);
}

void* Rule_CR::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_CR* Rule_CR::parse(ParserContext& context)
{
  context.push("CR");

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
          rule = Terminal_NumericValue::parse(context, "%x0D", "[\\x0D]", 1);
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
    rule = new Rule_CR(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("CR", parsed);

  return (Rule_CR*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
