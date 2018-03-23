#pragma once
#include <vector>

using namespace std;

class ExpertSystem
{
private:
	vector<string> rules;
	vector<string> facts;
	vector<string> queries;
public:

	vector<string> *GetRules();
	vector<string> *GetFacts();
	vector<string> *GetQueries();

	void			AddRule(string rule);
	void			AddFact(string fact);
	void			AddQuery(string query);

	ExpertSystem();
	~ExpertSystem();
};

