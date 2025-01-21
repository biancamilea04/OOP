#pragma once

class ListaParagrafe{
	const char* paragrafe[100];
	int numarParagrafe;
public:
	ListaParagrafe();
	~ListaParagrafe();
	void Add(const char* p);

	const char* const* begin() ;
	const char* const* end();

};
