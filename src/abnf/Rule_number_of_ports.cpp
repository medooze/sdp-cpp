/* -----------------------------------------------------------------------------
 * Rule_number_of_ports.cpp
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

#include "Rule_number_of_ports.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_integer.hpp"

using namespace abnf;

Rule_number_of_ports::Rule_number_of_ports(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_number_of_ports::Rule_number_of_ports(const Rule_number_of_ports& rule) : Rule(rule)
{
}

Rule_number_of_ports& Rule_number_of_ports::operator=(const Rule_number_of_ports& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_number_of_ports* Rule_number_of_ports::clone() const
{
  return new Rule_number_of_ports(this->spelling, this->rules);
}

void* Rule_number_of_ports::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_number_of_ports* Rule_number_of_ports::parse(ParserContext& context)
{
  context.push("number-of-ports");

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
          rule = Rule_integer::parse(context);
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
    rule = new Rule_number_of_ports(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("number-of-ports", parsed);

  return (Rule_number_of_ports*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
