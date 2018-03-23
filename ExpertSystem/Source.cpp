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
		system.AddRule(line);
	}

	for (auto i : *system.GetRules())
	{
		std::cout << i << std::endl;
	}

	WaitForInput();
	return 0;
}