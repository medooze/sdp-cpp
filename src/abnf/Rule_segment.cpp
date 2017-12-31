/* -----------------------------------------------------------------------------
 * Rule_segment.cpp
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

#include "Rule_segment.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_pchar.hpp"

using namespace abnf;

Rule_segment::Rule_segment(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_segment::Rule_segment(const Rule_segment& rule) : Rule(rule)
{
}

Rule_segment& Rule_segment::operator=(const Rule_segment& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_segment* Rule_segment::clone() const
{
  return new Rule_segment(this->spelling, this->rules);
}

void* Rule_segment::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_segment* Rule_segment::parse(ParserContext& context)
{
  context.push("segment");

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
          rule = Rule_pchar::parse(context);
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
    rule = new Rule_segment(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("segment", parsed);

  return (Rule_segment*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
