#include "Scanner.h"

char Scanner::GetNextChar(std::string str, int curPos)
{
	if (str[curPos + 1])
		return str[curPos + 1];
}

void Scanner::Init()
{

}

int Scanner::ScanOneToken(std::string line, int &pos, Token *token)
{
	while (line[pos] == ' ')
		pos++;

	if (line[pos] == '#')
		return 0;

	bool inSwitch = true;

	switch (line[pos])
	{
		token->lexeme = line[pos];
	case ('+'):
		token->type = TOKEN_TYPE::AND;
		break;
	case ('('):
		token->type = TOKEN_TYPE::L_PAREN;
		break;
	case (')'):
		token->type = TOKEN_TYPE::R_PAREN;
		break;
	case ('!'):
		token->type = TOKEN_TYPE::NOT;
		break;
	case('|'):
		token->type = TOKEN_TYPE::OR;
		break;
	case('^'):
		token->type = TOKEN_TYPE::XOR;
		break;
	case('='):
		if (GetNextChar(line, pos) == '>')
			token->type = TOKEN_TYPE::IMPLIES;
		else
			token->type = TOKEN_TYPE::START_FACT;
		break;
	case('<'):
		if (GetNextChar(line, pos) == '=' && GetNextChar(line, pos + 1) == '>')
			token->type = TOKEN_TYPE::IFF;
		break;
	case('?'):
		token->type = TOKEN_TYPE::START_QUERY;
		break;
	default:
		inSwitch = false;
		break;
	}

	if (inSwitch == false)
	{
		if (line[pos] >= 'A' && line[pos] <= 'Z')
		{
			token->type = TOKEN_TYPE::IDENTIFIER;
		}
		else
		{
			token->type = TOKEN_TYPE::UNKNOWN;
		}
	}
}


Scanner::Scanner()
{
}


Scanner::~Scanner()
{
}
