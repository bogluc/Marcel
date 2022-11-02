#include<iostream>

using namespace std;

int CharToInt(char c[])
{
	int decNr = 0;
	int temp = 1;
	int lenStr = 0;
	int i = 0;
	int check = 0;
	// calculam lungimea sirului 
	while (c[i] != NULL)
	{
		if (c[i] < '0' || c[i] > '9')
		{
			check = 1;
		}
		
		i++;

	}
	if (check == 1)
	{
		cout << "only numbers are allowed";
	}
	else
	{
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
	
	return 0;
}

int main()
{
	char c[] = "1234gv56";
	CharToInt(c);
}