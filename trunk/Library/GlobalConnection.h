#pragma once

using namespace System;
using namespace System::Data::Odbc;

ref class GlobalConnection
{
public:
	static System::Void OpenConnection();
	static OdbcConnection^ conn;
};
