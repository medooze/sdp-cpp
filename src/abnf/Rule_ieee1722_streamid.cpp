/* -----------------------------------------------------------------------------
 * Rule_ieee1722_streamid.cpp
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

#include "Rule_ieee1722_streamid.hpp"
#include "Visitor.hpp"
#include "ParserAlternative.hpp"
#include "ParserContext.hpp"

#include "Rule_avb_stream_id.hpp"
#include "Terminal_StringValue.hpp"

using namespace abnf;

Rule_ieee1722_streamid::Rule_ieee1722_streamid(
  const string& spelling, 
  const vector<Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_ieee1722_streamid::Rule_ieee1722_streamid(const Rule_ieee1722_streamid& rule) : Rule(rule)
{
}

Rule_ieee1722_streamid& Rule_ieee1722_streamid::operator=(const Rule_ieee1722_streamid& rule)
{
  Rule::operator=(rule);
  return *this;
}

Rule* Rule_ieee1722_streamid::clone() const
{
  return new Rule_ieee1722_streamid(this->spelling, this->rules);
}

void* Rule_ieee1722_streamid::accept(Visitor& visitor)
{
  return visitor.visit(this);
}

Rule_ieee1722_streamid* Rule_ieee1722_streamid::parse(ParserContext& context)
{
  context.push("ieee1722-streamid");

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
      Rule* rule = Terminal_StringValue::parse(context, "IEEE1722=");
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
      Rule* rule = Rule_avb_stream_id::parse(context);
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
    rule = new Rule_ieee1722_streamid(context.text.substr(a0.start, a0.end - a0.start), a0.rules);
  }
  else
  {
    context.index = s0;
  }

  context.pop("ieee1722-streamid", parsed);

  return (Rule_ieee1722_streamid*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
