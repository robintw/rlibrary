#include "StdAfx.h"
#include "GlobalConnection.h"

System::Void GlobalConnection::OpenConnection()
{
	conn = gcnew OdbcConnection("DSN=LibraryDB");

	conn->Open();
}