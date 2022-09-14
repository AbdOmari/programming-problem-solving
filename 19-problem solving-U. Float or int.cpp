#include<iostream>
using namespace std;
int main()
{
	double num1;
	cin >> num1;
	int num2 = num1;
	int intt;
	float floatt;
	if (num2 % 1 == 0)
	{
		intt = num2;
	}
	floatt = num1 - num2;
	cout << "int :" << intt << endl;
	cout << "float: " << floatt << endl;
}