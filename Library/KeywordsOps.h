#pragma once

#include "GlobalConnection.h"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Specialized;
using namespace System::Data;

ref class KeywordsOps
{
public:
	KeywordsOps(void);
	KeywordsOps(array<String^>^ GivenKeywords);
	
	StringCollection^ Keywords;

	void AddKeywordsToDB();
	void LinkKeywordsAndBook(int BookID);
	array<String^>^ GetKeywordsForBook(int BookID);
	array<String^>^ GetAllKeywords();

	array<String^>^ GetKeywordsArray();
	StringCollection^ GetKeywordsStringCollection();

};
