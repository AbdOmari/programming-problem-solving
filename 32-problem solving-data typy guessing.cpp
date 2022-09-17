#include<iostream>
using namespace std;
int main()
{
	double num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	double result = (num1 * num2) / num3;
	long long mynumber = result;
	double myres = result - mynumber;
	if (myres > 0)
		cout << "Double" << endl;
	else if (mynumber <= 2147483647)
		cout << "Int" << endl;
	else
		cout << "Long Long";
}