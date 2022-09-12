#include<iostream>
using namespace std;
int main()
{
	int x, y, z, max, min;
	cin >> x >> y >> z;
	if (x > y && x > z)
	{
		max = x;
	}
	else if (y > x && y > z)
	{

		max = y;
	}
	else
	{
		max = z;
	}
	cout << max << endl;
	if (x < y && x < z)
	{
		min = x;
	}
	else if (y < x && y < z)
	{

		min = y;
	}
	else
	{
		min = z;
	}
	cout << "max : " << max << endl;
	cout << "min : " << min << endl;


}