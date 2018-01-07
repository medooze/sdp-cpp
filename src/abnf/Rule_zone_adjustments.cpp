/* -----------------------------------------------------------------------------
 * Rule_zone_adjustments.cpp
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

#include "Rule_zone_adjustments.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_time.hpp"
#include "Rule_CRLF.hpp"
#include "Rule_SP.hpp"
#include "Terminal_NumericValue.hpp"
#include "Terminal_StringValue.hpp"
#include "Rule_typed_time.hpp"

using namespace abnf;

Rule_zone_adjustments::Rule_zone_adjustments(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_zone_adjustments::Rule_zone_adjustments(const Rule_zone_adjustments& rule) : Rule(rule)
{
}

Rule_zone_adjustments& Rule_zone_adjustments::operator=(const Rule_zone_adjustments& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_zone_adjustments* Rule_zone_adjustments::clone() const
{
  return new Rule_zone_adjustments(this->spelling, this->rules);
}

void* Rule_zone_adjustments::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_zone_adjustments* Rule_zone_adjustments::parse(ParserContext& context)
{
  context.push("zone-adjustments");

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
          rule = Terminal_NumericValue::parse(context, "%x7a", "[\\x7a]", 1);
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
        for (int i1 = 0; i1 < 1 && f1; i1++)
        {
          rule = Terminal_StringValue::parse(context, "=");
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
                  rule = Rule_SP::parse(context);
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
                  rule = Rule_time::parse(context);
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
                  rule = Rule_SP::parse(context);
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
                  unsigned int g2 = context.index;
                  parsed = false;
                  if (!parsed)
                  {
                    {
                      vector<const Rule*> e3;
                      int s3 = context.index;
                      parsed = true;
                      if (parsed)
                      {
                        bool f3 = true;
                        int c3 = 0;
                        for (int i3 = 0; i3 < 1 && f3; i3++)
                        {
                          rule = Terminal_StringValue::parse(context, "-");
                          if ((f3 = rule != NULL))
                          {
                            e3.push_back(rule);
                            c3++;
                          }
                        }
                        parsed = c3 == 1;
                      }
                      if (parsed)
                        e2.insert(e2.end(), e3.begin(), e3.end());
                      else
                        context.index = s3;
                    }
                  }
                  if (context.index > g2) c2++;
                  f2 = c2 > i2;
                }
                parsed = true;
              }
              if (parsed)
              {
                bool f2 = true;
                int c2 = 0;
                for (int i2 = 0; i2 < 1 && f2; i2++)
                {
                  rule = Rule_typed_time::parse(context);
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
      {
        bool f1 = true;
        int c1 = 0;
        for (int i1 = 0; i1 < 1 && f1; i1++)
        {
          rule = Rule_CRLF::parse(context);
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
    rule = new Rule_zone_adjustments(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("zone-adjustments", parsed);

  return (Rule_zone_adjustments*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
