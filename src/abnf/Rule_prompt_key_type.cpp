/* -----------------------------------------------------------------------------
 * Rule_prompt_key_type.cpp
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

#include "Rule_prompt_key_type.hpp"
#include "Visitor.hpp"
#include "ParserAlternative.hpp"
#include "ParserContext.hpp"

#include "Terminal_StringValue.hpp"

using namespace abnf;

Rule_prompt_key_type::Rule_prompt_key_type(
  const string& spelling, 
  const vector<Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_prompt_key_type::Rule_prompt_key_type(const Rule_prompt_key_type& rule) : Rule(rule)
{
}

Rule_prompt_key_type& Rule_prompt_key_type::operator=(const Rule_prompt_key_type& rule)
{
  Rule::operator=(rule);
  return *this;
}

Rule* Rule_prompt_key_type::clone() const
{
  return new Rule_prompt_key_type(this->spelling, this->rules);
}

void* Rule_prompt_key_type::accept(Visitor& visitor)
{
  return visitor.visit(this);
}

Rule_prompt_key_type* Rule_prompt_key_type::parse(ParserContext& context)
{
  context.push("prompt-key-type");

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
      Rule* rule = Terminal_StringValue::parse(context, "prompt");
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
    rule = new Rule_prompt_key_type(context.text.substr(a0.start, a0.end - a0.start), a0.rules);
  }
  else
  {
    context.index = s0;
  }

  context.pop("prompt-key-type", parsed);

  return (Rule_prompt_key_type*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
