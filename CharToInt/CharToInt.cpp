#include<iostream>
#include<conio.h>

using namespace std;

char c[];

int KeyInput(char c[])
{
	char ch = 0;
	int i = 0;

	cout << "insert number and press q to end program" << '\n';

	while (ch != 'q' && ch != EOF)
	{
		//cin.getline(c, 100);
		ch = _getch();
		c[i] = ch;

		printf("%c", ch);
		i++;
	}
	int lenStr = i;

	return c[lenStr];
}

int CharToInt(char c[])
{	
	int lenStr = 0;
	int i = 0;
	c[100] = KeyInput(c);
	int decNr = 0;
	int temp = 1;

	while (c[i] != 'q') 
	{
		i++;
	}
	lenStr = i;

	for(i = lenStr - 1; i >= 0; i--)
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			decNr = decNr + (c[i] - '0') * temp;

			temp = temp * 10;
		}
	}
	cout <<'\n'<< decNr;
	return 0;
}

int main()
{
	char c[100];

	CharToInt(c);

	return 0;
}