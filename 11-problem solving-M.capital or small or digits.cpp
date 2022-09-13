#include<iostream>
using namespace std;
int main()
{
	char onechar;
	cin >> onechar;
	if (onechar >= 97 && onechar <= 120)
	{
		cout << "Alpha" << endl;
		cout << "Small";
	}
	else if (onechar >= 65 && onechar <= 88)
	{
		cout << "Alpha" << endl;
		cout << "Capita;";
	}
	else
		cout << "digit";

}