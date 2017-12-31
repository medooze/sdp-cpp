/* -----------------------------------------------------------------------------
 * Rule_dcontent.cpp
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

#include "Rule_dcontent.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_dtext.hpp"
#include "Rule_quoted_pair.hpp"

using namespace abnf;

Rule_dcontent::Rule_dcontent(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_dcontent::Rule_dcontent(const Rule_dcontent& rule) : Rule(rule)
{
}

Rule_dcontent& Rule_dcontent::operator=(const Rule_dcontent& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_dcontent* Rule_dcontent::clone() const
{
  return new Rule_dcontent(this->spelling, this->rules);
}

void* Rule_dcontent::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_dcontent* Rule_dcontent::parse(ParserContext& context)
{
  context.push("dcontent");

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
          rule = Rule_dtext::parse(context);
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
          rule = Rule_quoted_pair::parse(context);
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
    rule = new Rule_dcontent(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("dcontent", parsed);

  return (Rule_dcontent*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
