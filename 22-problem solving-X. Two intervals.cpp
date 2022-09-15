#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3, num4;
	int start, end;
	cin >> num1 >> num2 >> num3 >> num4;
	if ((num3 < num1 && num4 < num1) || (num3 > num2 && num4 > num2))
	{
		cout << "There are No intersections" << endl;
	}
	else if (num1 > num3 && num2 > num4)
	{
		start = num1;
		end = num4;
		cout << "start: " << start << endl;
		cout << "end: " << end << endl;
	}
	else if (num1 < num3 && num2 < num4)
	{
		start = num3;
		end = num2;
		cout << "start: " << start << endl;
		cout << "end: " << end << endl;
	}
}