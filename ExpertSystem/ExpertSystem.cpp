#include "ExpertSystem.h"
#include "Header.h"

vector<Proposition> *ExpertSystem::GetRules() 
{
	return &rules;
}
vector<Fact> *ExpertSystem::GetFacts()
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
	{
		OUTPUT.Error("Attempting to add an empty rules");
	}
	else
	{
		std::string consequent ="";
		std::string antecedant ="";

		int i;
		for (i =0; i < rule.length(); i++)
		{
			if (rule[i] == '=' && rule[i + 1] && rule[i + 1] == '>')
				break;
			antecedant += rule[i];
		}
		for (i = i + 2; i < rule.length(); i++)
		{
			consequent += rule[i];
		}

		Proposition p(antecedant, consequent);
		rules.push_back(p);
	}

	// Extract facts from rules

	for (auto i : rule)
	{
		AddFact(i, false);
	}
}
void ExpertSystem::AddFact(char symbol, bool state)
{
	if (symbol >= 'A' && symbol <= 'Z')
	{
		bool canAdd = true;
		for (auto &f : facts)
		{
			if (f.GetSymbol() == symbol)
			{
				canAdd = false;
				f.SetState(state);
				OUTPUT.Debug("Changing state");
				break;
			}
		}

		if (canAdd) {
			Fact f(symbol, state);
			facts.push_back(f);
		}
	}
	
}
void ExpertSystem::AddQuery(string query)
{
	if (query.empty())
		OUTPUT.Error("Attempting to add an empty query");
	else
		queries.push_back(query);
}

ExpertSystem::ExpertSystem()
{
}


void ExpertSystem::SolveQueries()
{
	OUTPUT.Debug("Solving queries");

	for (auto i : queries)
	{
		for (auto fact : i)
		{

		}
	}

	

}

ExpertSystem::~ExpertSystem()
{
}
