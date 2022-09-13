#include<iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	if (number >= 0 && number <= 25)
		cout << "Intervals [0 , 25]" << endl;
	else if (number >= 25 && number <= 50)
		cout << "Intervals [25 , 50]" << endl;
	else if (number >= 50 && number <= 75)
		cout << "Intervals [50 , 75]" << endl;
	else if (number >= 75 && number <= 100)
		cout << "Intervals [75 , 100]" << endl;
}
