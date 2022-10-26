#include <iostream>
using namespace std;

int invertString(char starr[])
{
	int temp = 0;
	int i = 0;
	int l = 0;

	while (starr[i] != NULL)
	{
		i++;
	}
	l = i;

	for (int i = 0; i < l - i - 1; i++)
	{
		temp = starr[i];
		starr[i] = starr[l - i - 1];
		starr[l - i - 1] = temp;
	}

	return l;
}

int main()
{
	char starr[] = "1234567890a";
	int stL = 0;

	stL = invertString(starr);
	
	for (int i = 0; i < stL; i++)
	{
		cout << starr[i] << " ";
		
	}

	cout << "\\";

	cout << '\07';

	return 0;

}
