#include "FileReader.h"

void FileReader::OpenFile(string filePath)
{
	if (filePath.empty()) {
		std::cout << "Error: file path is empty" << std::endl;
		return;
	}

	if (file == nullptr)
		file = std::make_unique<ifstream>(filePath);
	//file->open(filePath, ios::in | ios::app);
}
bool FileReader::GetNextLine(string &str)
{
	string line;

	if (file->is_open()) {
		if (getline(*file, line)) {
			str = line;
			return true;
		}
		file->close();
		return false;
	}
	else
	{
		std::cout << "Error: No file has been opened." << std::endl;
		return false;
	}
}

FileReader::FileReader()
	:file(nullptr)
{
}


FileReader::~FileReader()
{
}
