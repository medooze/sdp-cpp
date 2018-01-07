/* -----------------------------------------------------------------------------
 * Rule_fixed_len_time_unit.cpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Jan 07 16:41:36 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Rule_fixed_len_time_unit.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Terminal_NumericValue.hpp"

using namespace abnf;

Rule_fixed_len_time_unit::Rule_fixed_len_time_unit(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_fixed_len_time_unit::Rule_fixed_len_time_unit(const Rule_fixed_len_time_unit& rule) : Rule(rule)
{
}

Rule_fixed_len_time_unit& Rule_fixed_len_time_unit::operator=(const Rule_fixed_len_time_unit& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_fixed_len_time_unit* Rule_fixed_len_time_unit::clone() const
{
  return new Rule_fixed_len_time_unit(this->spelling, this->rules);
}

void* Rule_fixed_len_time_unit::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_fixed_len_time_unit* Rule_fixed_len_time_unit::parse(ParserContext& context)
{
  context.push("fixed-len-time-unit");

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
          rule = Terminal_NumericValue::parse(context, "%x64", "[\\x64]", 1);
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
          rule = Terminal_NumericValue::parse(context, "%x68", "[\\x68]", 1);
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
          rule = Terminal_NumericValue::parse(context, "%x6d", "[\\x6d]", 1);
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
          rule = Terminal_NumericValue::parse(context, "%x73", "[\\x73]", 1);
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
    rule = new Rule_fixed_len_time_unit(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("fixed-len-time-unit", parsed);

  return (Rule_fixed_len_time_unit*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
