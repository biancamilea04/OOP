#include "ListaParagrafe.h"

ListaParagrafe::ListaParagrafe()
{
	paragrafe[0] = nullptr;
	numarParagrafe = 0;
}

ListaParagrafe::~ListaParagrafe()
{
}

void ListaParagrafe::Add(const char* p)
{
	paragrafe[numarParagrafe] = p;
	numarParagrafe++;
}

const char* const* ListaParagrafe::begin()
{
	return paragrafe;
}

const char* const* ListaParagrafe::end()
{
	return paragrafe+numarParagrafe;
}
