#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze;
	int foo = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	int bar = 0;
	int specialChars = 0;

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;

	//Allows the program to receive a string input
	getline(cin, textToAnalyze);

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			//Added vowels instead of subtracted them
			++vowels;
		}
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			//Added consonants cause it was commented out
			++consonants;
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		//Added some special characters just for testing
		else if (textToAnalyze[i] == '!' || textToAnalyze[i] == '@' || textToAnalyze[i] == '#' ||
				textToAnalyze[i] == '$' || textToAnalyze[i] == '%' || textToAnalyze[i] == '^' ||
				textToAnalyze[i] == '&' || textToAnalyze[i] == '*' || textToAnalyze[i] == '(' || textToAnalyze[i] == ')'){
			++specialChars;
		}
		else
		{
			++unknownCharacters;
		}
	}

	//Checking the legnth of the string
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();

	//Assing the value of all unknown characters, vowels, consonants, digits, spaces, and special characters to checkSum
	checkSum = unknownCharacters + vowels + consonants + digits + spaces + specialChars;

	//Announce what types of letters were in the code
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Special Characters: " << specialChars << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	//Checking to make sure every character was analyzed
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}