#include<iostream>
using namespace std;
int main()
/*
X=(A*B)-(C*D)
output: Difference = X
*/
{
	int A, B, C, D, X, difference;
	cin >> A >> B >> C >> D;
	X = (A * B) - (C * D);
	cout << "difference=" << X << endl;
	return 0;
}