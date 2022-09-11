#include<iostream>
using namespace std;
int main()
{
	int x, y, sum, minus, multiply;
	cout << "enter x:";
	cin >> x;
	cout << "enter y:";
	cin >> y;
	sum = x + y;
	minus = x - y;
	multiply = x * y;
	cout << x << "+" << y << "= " << sum << endl;
	cout << x << "-" << y << "=" << minus << endl;
	cout << x << "*" << y << "=" << multiply << endl;
	return 0;
}