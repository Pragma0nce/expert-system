#include "ExpertSystem.h"
#include "Header.h"

vector<string> *ExpertSystem::GetRules() 
{
	return &rules;
}
vector<string> *ExpertSystem::GetFacts()
{
	return &facts;
}
vector<string> *ExpertSystem::GetQueries()
{
	return &queries;
}

void ExpertSystem::AddRule(string rule)
{
	if (rule.empty())
		std::cout << "Attempting to add an empty rule" << std::endl;
	else
		rules.push_back(rule);
}
void ExpertSystem::AddFact(string fact)
{
	if (fact.empty())
		std::cout << "Attempting to add an empty rule" << std::endl;
	else
		facts.push_back(fact);
}
void ExpertSystem::AddQuery(string query)
{
	if (query.empty())
		std::cout << "Attempting to add an empty rule" << std::endl;
	else
		queries.push_back(query);
}

ExpertSystem::ExpertSystem()
{
}


ExpertSystem::~ExpertSystem()
{
}
