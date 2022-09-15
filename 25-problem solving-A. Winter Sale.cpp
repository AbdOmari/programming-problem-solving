#include<iostream>
using namespace std;
int main()
{
	double discount, price;
	double Pre, PriceResult, result;
	cin >> discount >> price;
	Pre = 100 - discount;
	PriceResult = price / Pre;
	result = (price * PriceResult) + discount;
	cout << result << endl;
}