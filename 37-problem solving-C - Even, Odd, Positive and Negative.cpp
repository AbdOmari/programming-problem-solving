#include<iostream>
using namespace std;
int main()
{
	int x, even = 0, odd = 0, negative = 0, positive = 0;
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		int num;
		cin >> num;
		if (num % 2 == 0)
		{
			even++;
		}
		if (num % 2 != 0)
		{
			odd++;
		}
		if (num < 0)
		{
			negative++;
		}
		if (num > 0)
		{
			positive++;
		}
	}
	cout << "Even: " << even << endl;
	cout << "odd: " << odd << endl;
	cout << "negative: " << negative << endl;
	cout << "positive: " << positive << endl;
}