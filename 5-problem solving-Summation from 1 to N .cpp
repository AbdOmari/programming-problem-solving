#include<iostream>
using namespace std;
/*
EX:====>input:3   Output:6
EX:====>input:10   Output:55
*/
int main()
{
	int x, sum = 0;
	cin >> x;
	for (int i = 1; i <= x; i++)
		sum += i;
	cout << sum << endl;
}