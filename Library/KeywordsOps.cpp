#include "StdAfx.h"
#include "KeywordsOps.h"

KeywordsOps::KeywordsOps(void)
{
	Keywords = gcnew StringCollection();
}

KeywordsOps::KeywordsOps(array<String^>^ GivenKeywords)
{
	Keywords = gcnew StringCollection();
	Keywords->AddRange(GivenKeywords);
}

void KeywordsOps::AddKeywordsToDB()
		 {
			 int i;
			 for (i = 0; i < Keywords->Count; i++)
			 {
				 Keywords[i] = Keywords[i]->Trim();
				 String^ CommandString = String::Format("SELECT Count(*) FROM Keywords WHERE Name = \"{0}\";", Keywords[i]);

				 OdbcCommand^ cmd = gcnew OdbcCommand(CommandString, GlobalConnection::conn);

				 if (Convert::ToInt16(cmd->ExecuteScalar()) == 0)
				 {
					 String^ InsertCommand = String::Format("INSERT INTO Keywords VALUES (Null, \"{0}\");", Keywords[i]);

					 OdbcCommand^ cmdInsert = gcnew OdbcCommand(InsertCommand, GlobalConnection::conn);
					 cmdInsert->ExecuteNonQuery();
				 }
			 }
		 }

void KeywordsOps::LinkKeywordsAndBook(int BookID)
		 {
			 int i, CurrentKeywordID;

			 for (i = 0; i < Keywords->Count; i++)
			 {
			 	 OdbcCommand^ cmdGetID = gcnew OdbcCommand(String::Format("SELECT ID FROM Keywords WHERE Name = \"{0}\";", Keywords[i]), GlobalConnection::conn);
				 CurrentKeywordID = Convert::ToInt32(cmdGetID->ExecuteScalar());

				 String^ CommandText = String::Format("INSERT INTO KeywordsLink VALUES (Null, {0}, {1});", CurrentKeywordID, BookID);
				 OdbcCommand^ cmdInsert = gcnew OdbcCommand(CommandText, GlobalConnection::conn);
				 cmdInsert->ExecuteNonQuery();
			 }
		 }

array<String^>^ KeywordsOps::GetKeywordsForBook(int BookID)
{
	Keywords->Clear();
	OdbcCommand^ cmdKeywords = gcnew OdbcCommand(String::Format("SELECT Name FROM Keywords, KeywordsLink WHERE KeywordsLink.BookID = {0} AND KeywordsLink.KeywordID = Keywords.ID;", BookID), GlobalConnection::conn);
	OdbcDataReader^ rdrKeywords = cmdKeywords->ExecuteReader();

	while (rdrKeywords->Read())
	{
		Keywords->Add(rdrKeywords["Name"]->ToString());
	}

	return GetKeywordsArray();
}

array<String^>^ KeywordsOps::GetKeywordsArray()
{
	array<String^>^ KeywordsToReturn = gcnew array<String^>(Keywords->Count);
	Keywords->CopyTo(KeywordsToReturn, 0);

	return KeywordsToReturn;
}

StringCollection^ KeywordsOps::GetKeywordsStringCollection()
{
	return Keywords;
}