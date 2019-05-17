/* -----------------------------------------------------------------------------
 * Rule_ptp_domain_name.cpp
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

#include "Rule_ptp_domain_name.hpp"
#include "Visitor.hpp"
#include "ParserAlternative.hpp"
#include "ParserContext.hpp"

#include "Rule_ptp_domain_char.hpp"
#include "Terminal_StringValue.hpp"

using namespace abnf;

Rule_ptp_domain_name::Rule_ptp_domain_name(
  const string& spelling, 
  const vector<Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_ptp_domain_name::Rule_ptp_domain_name(const Rule_ptp_domain_name& rule) : Rule(rule)
{
}

Rule_ptp_domain_name& Rule_ptp_domain_name::operator=(const Rule_ptp_domain_name& rule)
{
  Rule::operator=(rule);
  return *this;
}

Rule* Rule_ptp_domain_name::clone() const
{
  return new Rule_ptp_domain_name(this->spelling, this->rules);
}

void* Rule_ptp_domain_name::accept(Visitor& visitor)
{
  return visitor.visit(this);
}

Rule_ptp_domain_name* Rule_ptp_domain_name::parse(ParserContext& context)
{
  context.push("ptp-domain-name");

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
      Rule* rule = Terminal_StringValue::parse(context, "domain-name=");
      if ((f1 = rule != NULL))
      {
        a1.add(rule, context.index);
        c1++;
      }
      parsed = c1 == 1;
    }
    if (parsed)
    {
      bool f1 = true;
      int c1 = 0;
      for (int i1 = 0; i1 < 1 && f1; i1++)
      {
        Rule* rule = Rule_ptp_domain_char::parse(context);
        if ((f1 = rule != NULL))
        {
          a1.add(rule, context.index);
          c1++;
        }
      }
      for (int i1 = 1; i1 < 16 && f1; i1++)
      {
        Rule* rule = Rule_ptp_domain_char::parse(context);
        if ((f1 = rule != NULL))
        {
          a1.add(rule, context.index);
          c1++;
        }
      }
      parsed = c1 >= 1;
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
    rule = new Rule_ptp_domain_name(context.text.substr(a0.start, a0.end - a0.start), a0.rules);
  }
  else
  {
    context.index = s0;
  }

  context.pop("ptp-domain-name", parsed);

  return (Rule_ptp_domain_name*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
