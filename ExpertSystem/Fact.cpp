#include "Fact.h"

bool Fact::GetState()
{
	return state;
}

void Fact::SetState(bool value)
{
	state = value;
}

char Fact::GetSymbol()
{
	return symbol;
}

Fact::~Fact()
{
}
