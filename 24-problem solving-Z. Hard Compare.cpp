#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, result1, result2;
	cin >> a >> b >> c >> d;
	result1 = b * log(a);
	result2 = d * log(c);
	if (result1 > result2)
		cout << "yes" << endl;
	else
		cout << "false" << endl;
}