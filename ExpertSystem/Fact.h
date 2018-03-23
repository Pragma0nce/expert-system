#pragma once
#include "Header.h"

class Fact
{
private:
	bool state;
	char symbol;
public:
	Fact(char sym, bool value)
		:state(value), symbol(sym)
	{
	};

	bool GetState();
	void SetState(bool value);

	char GetSymbol();
	~Fact();
};

