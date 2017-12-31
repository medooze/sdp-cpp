/* -----------------------------------------------------------------------------
 * Rule_group_semantics.cpp
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

#include "Rule_group_semantics.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_token.hpp"

using namespace abnf;

Rule_group_semantics::Rule_group_semantics(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_group_semantics::Rule_group_semantics(const Rule_group_semantics& rule) : Rule(rule)
{
}

Rule_group_semantics& Rule_group_semantics::operator=(const Rule_group_semantics& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_group_semantics* Rule_group_semantics::clone() const
{
  return new Rule_group_semantics(this->spelling, this->rules);
}

void* Rule_group_semantics::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_group_semantics* Rule_group_semantics::parse(ParserContext& context)
{
  context.push("group-semantics");

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
          rule = Rule_token::parse(context);
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
    rule = new Rule_group_semantics(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("group-semantics", parsed);

  return (Rule_group_semantics*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
