#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3, num4, result;
	cin >> num1 >> num2 >> num3 >> num4;
	int newnum1 = num1 % 100;
	int newnum2 = num2 % 100;
	int newnum3 = num3 % 100;
	int newnum4 = num4 % 100;
	result = newnum1 * newnum2 * newnum3 * newnum4;
	if (result <= 9)
		cout << "0" << result % 100 << endl;
	else
		cout << result % 100 << endl;
}