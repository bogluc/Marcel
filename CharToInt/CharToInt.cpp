#include<iostream>

using namespace std;

int main()
{
	char c[] = "123";
	int decNr = 0;
	int temp = 1;
	int lenStr = 0;
	int i = 0;

	// calculam lungimea sirului 
	while (c[i] != NULL)
	{
		i++;
	}

	lenStr = i;

	// valoarea ASCII a lui a este 'a'
	// valoare ASCII a unui caracter escape, de ex \, este '\\' , pt TAB este '\TAB'

	for (i = lenStr - 1; i >= 0; i--)
	{
		decNr = decNr + (c[i] - '0') * temp;

		temp = temp * 10;
	}

	cout << decNr;
}