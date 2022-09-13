#include<iostream>
using namespace std;
int main()
{
	int inputdays;
	cin >> inputdays;
	int year = inputdays / 365;
	inputdays -= 365 * year;
	int mounth = inputdays / 30;
	inputdays -= 30 * mounth;
	cout << "Years: " << year << endl;
	cout << "Month: " << mounth << endl;
	cout << "Days: " << inputdays << endl;


}