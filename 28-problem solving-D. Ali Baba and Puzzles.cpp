#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3, result;
	cin >> num1 >> num2 >> num3 >> result;
	int result1 = num1 * num2 + num3;
	int result2 = num1 * num2 - num3;
	int result3 = num1 + num2 * num3;
	int result4 = num1 - num2 * num3;
	int result5 = num1 + num2 - num3;
	int result6 = num1 - num2 + num3;
	int result7 = num1 * num2 * num3;
	int result8 = num1 + num2 + num3;
	int result9 = num1 - num2 - num3;
	if (result == result1 || result == result2 || result == result3
		|| result == result4 || result == result5 || result == result6 ||
		result == result7 || result == result8 || result == result9)
	{
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}