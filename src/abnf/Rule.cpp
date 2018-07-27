/* -----------------------------------------------------------------------------
 * Rule.cpp
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

#include "Rule.hpp"

using namespace abnf;

Rule::Rule(const string& spelling, const vector<Rule*>& rules) :
spelling(spelling)
{
  vector<Rule*>::const_iterator r;

  for (r = rules.begin(); r != rules.end(); r++)
    this->rules.push_back((*r)->clone());
}

Rule::Rule(const Rule& rule) :
spelling(rule.spelling)
{
  vector<Rule*>::const_iterator r;

  for (r = rule.rules.begin(); r != rule.rules.end(); r++)
    this->rules.push_back((*r)->clone());
}

Rule& Rule::operator=(const Rule& rule)
{
  if (&rule != this)
  {
    spelling = rule.spelling;

    vector<Rule*>::const_iterator r;

    for (r = rules.begin(); r != rules.end(); r++)
      delete *r;

    rules.empty();

    for (r = rule.rules.begin(); r != rule.rules.end(); r++)
      rules.push_back((*r)->clone());
  }
  return *this;
}

Rule::~Rule()
{
  vector<Rule*>::const_iterator r;

  for (r = rules.begin(); r != rules.end(); r++)
    delete *r;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
