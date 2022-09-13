#include<iostream>
using namespace std;
int main()
{
	char onechar;
	cin >> onechar;
	int ask = onechar;
	if (onechar >= 97 && onechar <= 120)
	{
		cout << onechar - 32 << endl;
	}
	else if (onechar >= 65 && onechar <= 90)
	{
		cout << onechar + 32 << endl;
	}
}