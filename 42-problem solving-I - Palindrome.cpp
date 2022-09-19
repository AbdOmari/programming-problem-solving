#include<iostream>
using namespace std;
int main()
{
	string num1;
	cin >> num1;
	int size = num1.size();
	char num2[size];
	int counter = 0, myres2, myres1;
	for (int i = size - 1; i >= 0; i--)
	{
		num2[counter] = num1[i];
		counter++;
	}
	stringstream s1;
	s1 << num1;
	s1 >> myres1;
	stringstream s2;
	s2 << num2;
	s2>> myres2;
	cout << myres2 << endl;
	if (result1 == myresult2)
	{
		cout << "YES" << endl;
	else
		cout << "No" << endl;
	}
}