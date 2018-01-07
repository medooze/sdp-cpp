/* -----------------------------------------------------------------------------
 * Rule_qtext.cpp
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

#include "Rule_qtext.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_NO_WS_CTL.hpp"
#include "Terminal_NumericValue.hpp"

using namespace abnf;

Rule_qtext::Rule_qtext(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_qtext::Rule_qtext(const Rule_qtext& rule) : Rule(rule)
{
}

Rule_qtext& Rule_qtext::operator=(const Rule_qtext& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_qtext* Rule_qtext::clone() const
{
  return new Rule_qtext(this->spelling, this->rules);
}

void* Rule_qtext::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_qtext* Rule_qtext::parse(ParserContext& context)
{
  context.push("qtext");

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
          rule = Rule_NO_WS_CTL::parse(context);
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
          rule = Terminal_NumericValue::parse(context, "%d33", "[\\x21]", 1);
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
          rule = Terminal_NumericValue::parse(context, "%d35-91", "[\\x23-\\x5b]", 1);
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
          rule = Terminal_NumericValue::parse(context, "%d93-126", "[\\x5d-\\x7e]", 1);
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
    rule = new Rule_qtext(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("qtext", parsed);

  return (Rule_qtext*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
