#include<iostream>
using namespace std;
int main()
{
	int x, y, z, max, min, def;
	cin >> x >> y >> z;
	if (x > y && x > z)
	{
		max = x;
	}
	else if (y > z)
	{
		def = y;
		min = z;
	}
	else if (z > y)
	{
		def = z;
		min = y;
	}
	if (y > x && y > z)
	{
		max = y;
	}
	else if (x > z)
	{
		def = x;
		min = z;
	}
	else if (z > x)
	{
		def = z;
		min = x;
	}
	if (z > x && z > y)
	{
		max = z;
	}
	else if (z > x)
	{
		def = z;
		min = x;
	}
	else if (z > y)
	{
		def = z;
		min = y;
	}
	cout << min << endl;
	cout << def << endl;
	cout << max << endl;
}