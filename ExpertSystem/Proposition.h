#pragma once
#include "Header.h"

class Proposition
{
private:
	std::string	antecedant;
	std::string consequent;
public:
	Proposition(std::string first, std::string second) 
		:antecedant(first), consequent(second)
	{
	};

	std::string GetAntecedant() { return antecedant; };
	std::string GetConsequent() { return consequent; };

	~Proposition();
};

