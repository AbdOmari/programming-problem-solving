#include<iostream>
using namespace std;
int main()
{
	int counter;
	long long fac = 1;
	cin >> counter;
	while (counter--) {
		int num;
		cin >> num;
		for (int i = 1; i <= counter; i++)
		{
			fac *= i;
		}
		cout << fac << endl;
		fac = 1;
	}
}