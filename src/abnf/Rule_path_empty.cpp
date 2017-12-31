/* -----------------------------------------------------------------------------
 * Rule_path_empty.cpp
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

#include "Rule_path_empty.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_pchar.hpp"

using namespace abnf;

Rule_path_empty::Rule_path_empty(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_path_empty::Rule_path_empty(const Rule_path_empty& rule) : Rule(rule)
{
}

Rule_path_empty& Rule_path_empty::operator=(const Rule_path_empty& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_path_empty* Rule_path_empty::clone() const
{
  return new Rule_path_empty(this->spelling, this->rules);
}

void* Rule_path_empty::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_path_empty* Rule_path_empty::parse(ParserContext& context)
{
  context.push("path-empty");

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
    rule = new Rule_path_empty(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("path-empty", parsed);

  return (Rule_path_empty*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
