#include <iostream>
using namespace std;
int main()
{
	string name1, lastname1, name2, lastname2;
	cin >> name1 >> lastname1;
	cout << "first name :" << name1 << " " << lastname1 << endl;
	cin >> name2 >> lastname2;
	cout << "second name: " << name2 << " " << lastname2 << endl;
	if (lastname1 == lastname2)
	{
		cout << " Result: they are brother";
	}
	else
	{
		cout << " Result: they aren't brother";
	}
}