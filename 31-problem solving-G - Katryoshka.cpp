#include<iostream>
using namespace std;
int main()
{
	int eyes, mouth, body;
	cin >> eyes >> mouth >> body;
	int counter = 0;
	while (eyes != 0 && body != 0) {
		if (eyes >= 1 && mouth >= 1 && body >= 1)
		{
			counter++;
			eyes--;
			mouth--;
			body--;
		}
		else if ((eyes >= 2 && body >= 1))
		{
			counter++;
			eyes -= 2;
			body -= 1;
		}
		else
		{
			counter++;
			eyes -= 2;
			mouth--;
			body--;
		}
	}
	cout << counter << endl;
}