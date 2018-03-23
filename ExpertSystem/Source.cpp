#include "Header.h"
#include "FileReader.h"
#include "ExpertSystem.h"
using namespace std;

void WaitForInput()
{
	string x;
	std::cin >> x;
}


int main()
{
	FileReader reader;
	reader.OpenFile("C:/Data/test.txt");

	ExpertSystem system;

	string line;

	while (reader.GetNextLine(line))
	{
		if (line[0] == '?')
		{
			system.AddQuery(line);
		}
		else if (line[0] == '=')
		{
			int i = 1;
			while (line[i]) 
			{
				if (line[i] == '#')
					break;

				system.AddFact(line[i], true);
				i++;
			}
		}
		else if (line[0] != '#')
		{
			string rule = "";
			for (auto i : line)
			{
				if (i == '#') break;
				rule += i;
			}
			system.AddRule(rule);
		}
	}


	OUTPUT.Debug("RULES");
	for (auto i : *system.GetRules())
	{
		OUTPUT.Write(i.GetAntecedant() + " => " + i.GetConsequent());
	}

	OUTPUT.Debug("FACTS");
	string conv;
	for (auto i : *system.GetFacts())
	{
		if (i.GetState() == false) conv = "FALSE";
		else conv = "TRUE";

		std::cout << i.GetSymbol() << " = " << conv <<  std::endl;
	}

	OUTPUT.Debug("QUERIES");
	for (auto i : *system.GetQueries())
	{
		OUTPUT.Write(i);
	}

	system.SolveQueries();

	WaitForInput();
	return 0;
}