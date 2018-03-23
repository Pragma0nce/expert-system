#pragma once
#include "Header.h"

enum TOKEN_TYPE
{
	L_PAREN,
	R_PAREN,
	NOT,
	AND,
	OR,
	XOR,
	IMPLIES,
	IFF,
	IDENTIFIER,
	COMMENT,
	START_FACT,
	START_QUERY,
	UNKNOWN
};

class Token
{
public:
	TOKEN_TYPE type;
	std::string lexeme;
};


class Scanner
{
private:
	char GetNextChar(std::string str, int pos);
public:
	void	Init();
	int		ScanOneToken(std::string line,int &pos, Token *token);

	Scanner();
	~Scanner();
};

