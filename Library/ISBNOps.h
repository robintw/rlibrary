#pragma once

using namespace System;

ref class ISBNOps
{
public:
	static String^ Process(String^ Text);
private:
	static String^ ConvertEANToISBN(String^ EAN);
	static String^ ConvertSBNToISBN(String^ SBN);
	static String^ CreateISBNCheckDigit(String^ ISBN);
	static bool ValidateEAN(String^ EAN);
	static bool ValidateISBN(String^ ISBN);

};
