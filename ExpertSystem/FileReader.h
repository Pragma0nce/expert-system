#pragma once

#include "Header.h"
using namespace std;

class FileReader
{
private:
	unique_ptr<ifstream> file;
public:
	void OpenFile(string filePath);
	bool GetNextLine(string &str);

	FileReader();
	~FileReader();
};

