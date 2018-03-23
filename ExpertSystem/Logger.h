#pragma once
#include "Header.h"

#define OUTPUT Logger::Get()

class Logger
{
private:

public:
	static Logger& Get()
	{
		static Logger    instance;
		return instance;
	}

	void Write(std::string message);
	void Error(std::string message);
	void Debug(std::string message);

	Logger();
	~Logger();
	Logger(Logger const&) {};              // Don't Implement
	void operator=(Logger const&) {}; // Don't implement

};

