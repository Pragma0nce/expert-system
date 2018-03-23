#include "Logger.h"

void Logger::Write(std::string message)
{
	std::cout << message << std::endl;
}
void Logger::Error(std::string message)
{
	std::cout << "[ERROR]: " << message << std::endl;
}
void Logger::Debug(std::string message)
{
	std::cout << "---	" << message << "	---" << std::endl;
}

Logger::Logger()
{
}


Logger::~Logger()
{
}
