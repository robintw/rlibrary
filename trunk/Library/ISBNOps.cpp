#include "StdAfx.h"
#include "ISBNOps.h"

String^ ISBNOps::Process(String^ Text)
{
	String^ ISBN = "";
	switch (Text->Length)
	{
	case 9:
		{
		String^ ISBN = ConvertSBNToISBN(Text);
		if (ValidateISBN(ISBN))
		{
			return ISBN;
		}
		break;
		}
	case 10:
		{
		ISBN = Text;
		if (ValidateISBN(ISBN))
		{
			return ISBN;
		}
		break;
		}
	case 13:
		{
		if (ValidateEAN(Text))
		{
			String^ ISBN = ConvertEANToISBN(Text);
			return ISBN;
		}
		}
		break;
	default:
		return "";
	}
}

String^ ISBNOps::ConvertEANToISBN(String^ EAN) 
{
	if (ISBNOps::ValidateEAN(EAN))
	{
	 //Remove 978
	 EAN = EAN->Substring(3);

	 //Remove check digit
	 EAN = EAN->Substring(0, EAN->Length - 1);

	 //Convert to ISBN and return
	 return CreateISBNCheckDigit(EAN);
	}
	else
	{
		return "";
	}
}

String^ ISBNOps::ConvertSBNToISBN(String^ SBN)
{
 return String::Concat("0", SBN);
}

String^ ISBNOps::CreateISBNCheckDigit(String^ ISBN)
{
	int i, ProductForChar, RunningTotal;
	String^ ModResult;

	if (ISBN->Length != 9)
	{
		return "";
	}

	RunningTotal = 0;

	for (i = 0; i < ISBN->Length; i++)
	{
		ProductForChar = Convert::ToInt32(ISBN->Substring(i, 1)) * (i + 1);
		RunningTotal = RunningTotal + ProductForChar;
	}

	ModResult = Convert::ToString(RunningTotal % 11)->Trim();
	
	if (ModResult == "10")
	{
		ModResult = "X";
	}

	return String::Concat(ISBN, ModResult);
}

bool ISBNOps::ValidateEAN(String^ EAN)
{
 int RunningTotal;
 int i;

 if (EAN->Length != 13)
 {
	 return false;
 }

 RunningTotal = 0;

 for (i = 0; i < 11; i+=2)
 {
	 RunningTotal = RunningTotal + Convert::ToInt32(EAN[i]);
	 RunningTotal = RunningTotal + (3 * Convert::ToInt32(EAN[i+1]));
 }

 RunningTotal = RunningTotal + Convert::ToInt32(EAN[12]);

 RunningTotal = RunningTotal % 10;

 if (RunningTotal == 0)
 {
	 return true;
 }
 else
 {
	 return false;
 }
}

bool ISBNOps::ValidateISBN(String^ ISBN)
{
int i, RunningTotal, ProductForChar;
String^ ModResult;

RunningTotal = 0;

//All ISBNs must be 10 characters
if (ISBN->Length != 10)
{
	return false;
}

for (i = 0; i < ISBN->Length - 1; i++)
{
	ProductForChar = Convert::ToInt32(ISBN->Substring(i, 1)) * (i + 1);
	RunningTotal = RunningTotal + ProductForChar;
}

ModResult = Convert::ToString(RunningTotal % 11)->Trim();

if (ModResult == "10")
{
	ModResult = "X";
}

if (ModResult == ISBN->Substring(ISBN->Length - 1, 1))
{
	return true;
}
else
{
	return false;
}
}