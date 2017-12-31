/* -----------------------------------------------------------------------------
 * Rule_obs_domain.cpp
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

#include "Rule_obs_domain.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_atom.hpp"
#include "Terminal_StringValue.hpp"

using namespace abnf;

Rule_obs_domain::Rule_obs_domain(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_obs_domain::Rule_obs_domain(const Rule_obs_domain& rule) : Rule(rule)
{
}

Rule_obs_domain& Rule_obs_domain::operator=(const Rule_obs_domain& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_obs_domain* Rule_obs_domain::clone() const
{
  return new Rule_obs_domain(this->spelling, this->rules);
}

void* Rule_obs_domain::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_obs_domain* Rule_obs_domain::parse(ParserContext& context)
{
  context.push("obs-domain");

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
          rule = Rule_atom::parse(context);
          if ((f1 = rule != NULL))
          {
            e1.push_back(rule);
            c1++;
          }
        }
        parsed = c1 == 1;
      }
      if (parsed)
      {
        bool f1 = true;
        int c1 = 0;
        for (int i1 = 0; f1; i1++)
        {
          unsigned int g1 = context.index;
          parsed = false;
          if (!parsed)
          {
            {
              vector<const Rule*> e2;
              int s2 = context.index;
              parsed = true;
              if (parsed)
              {
                bool f2 = true;
                int c2 = 0;
                for (int i2 = 0; i2 < 1 && f2; i2++)
                {
                  rule = Terminal_StringValue::parse(context, ".");
                  if ((f2 = rule != NULL))
                  {
                    e2.push_back(rule);
                    c2++;
                  }
                }
                parsed = c2 == 1;
              }
              if (parsed)
              {
                bool f2 = true;
                int c2 = 0;
                for (int i2 = 0; i2 < 1 && f2; i2++)
                {
                  rule = Rule_atom::parse(context);
                  if ((f2 = rule != NULL))
                  {
                    e2.push_back(rule);
                    c2++;
                  }
                }
                parsed = c2 == 1;
              }
              if (parsed)
                e1.insert(e1.end(), e2.begin(), e2.end());
              else
                context.index = s2;
            }
          }
          if (context.index > g1) c1++;
          f1 = c1 > i1;
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
    rule = new Rule_obs_domain(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("obs-domain", parsed);

  return (Rule_obs_domain*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
