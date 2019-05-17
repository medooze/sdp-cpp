/* -----------------------------------------------------------------------------
 * Rule_ptp_version_ext.cpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Rule_ptp_version_ext.hpp"
#include "Visitor.hpp"
#include "ParserAlternative.hpp"
#include "ParserContext.hpp"

#include "Rule_token.hpp"

using namespace abnf;

Rule_ptp_version_ext::Rule_ptp_version_ext(
  const string& spelling, 
  const vector<Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_ptp_version_ext::Rule_ptp_version_ext(const Rule_ptp_version_ext& rule) : Rule(rule)
{
}

Rule_ptp_version_ext& Rule_ptp_version_ext::operator=(const Rule_ptp_version_ext& rule)
{
  Rule::operator=(rule);
  return *this;
}

Rule* Rule_ptp_version_ext::clone() const
{
  return new Rule_ptp_version_ext(this->spelling, this->rules);
}

void* Rule_ptp_version_ext::accept(Visitor& visitor)
{
  return visitor.visit(this);
}

Rule_ptp_version_ext* Rule_ptp_version_ext::parse(ParserContext& context)
{
  context.push("ptp-version-ext");

  bool parsed = true;
  int s0 = context.index;
  ParserAlternative a0(s0);

  vector<const ParserAlternative*> as1;
  parsed = false;
  {
    int s1 = context.index;
    ParserAlternative a1(s1);
    parsed = true;
    if (parsed)
    {
      bool f1 = true;
      int c1 = 0;
      Rule* rule = Rule_token::parse(context);
      if ((f1 = rule != NULL))
      {
        a1.add(rule, context.index);
        c1++;
      }
      parsed = c1 == 1;
    }
    if (parsed)
    {
      as1.push_back(new ParserAlternative(a1));
    }
    context.index = s1;
  }

  const ParserAlternative* b = ParserAlternative::getBest(as1);

  if ((parsed = b != NULL))
  {
    a0.add(b->rules, b->end);
    context.index = b->end;
  }

  for (vector<const ParserAlternative*>::const_iterator a = as1.begin(); a != as1.end(); a++)
  {
    delete *a;
  }

  Rule* rule = NULL;
  if (parsed)
  {
    rule = new Rule_ptp_version_ext(context.text.substr(a0.start, a0.end - a0.start), a0.rules);
  }
  else
  {
    context.index = s0;
  }

  context.pop("ptp-version-ext", parsed);

  return (Rule_ptp_version_ext*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
