#pragma once
#include <vector>
#include "Fact.h"
#include "Proposition.h"

using namespace std;

class ExpertSystem
{
private:
	vector<Proposition> rules;
	vector<Fact> facts;
	vector<string> queries;
public:

	vector<Proposition> *GetRules();
	vector<Fact> *GetFacts();
	vector<string> *GetQueries();

	void			AddRule(string rule);
	void			AddFact(char symbol, bool state);
	void			AddQuery(string query);

	void			SolveQueries();

	ExpertSystem();
	~ExpertSystem();
};

