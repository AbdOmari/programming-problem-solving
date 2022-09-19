#include<iostream>
using namespace std;
int main()
{
	int num1, Div;
	cin >> num1;
	for (int i = num1; i > 1; i--)
	{
		if (num1 % i == 0) {
			cout << i << endl;
		}
	}

}