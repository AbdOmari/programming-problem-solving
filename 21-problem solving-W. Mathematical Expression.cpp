#include<iostream>
using namespace std;
void validate(int resultt, int result)
{
	if (resultt == result)
		cout << "correct" << endl;
	else
		cout << "false" << endl;
}

int main()
{
	int x, y, result, resultt;
	char firstchar, secondchar;
	cin >> x >> firstchar >> y >> secondchar >> result;
	switch (firstchar) {
	case'+':
		resultt = x + y;
		validate(resultt, result);
		break;
	case'-':
		resultt = x - y;
		validate(resultt, result);
		break;
	case'*':
		resultt = x * y;
		validate(resultt, result);
		break;
	case'/':
		resultt = x / y;
		validate(resultt, result);
		break;
	}
}