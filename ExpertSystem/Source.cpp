#include "Header.h"
#include "FileReader.h"
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

	string line;

	while (reader.GetNextLine(line))
	{
		cout << line << endl;
	}

	WaitForInput();
	return 0;
}