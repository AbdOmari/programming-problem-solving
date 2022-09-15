#include<iostream>
using namespace std;
int main()
{
	int NumMemo, NumMomo, Divisor;
	cin >> NumMemo >> NumMomo >> Divisor;
	if (NumMemo % Divisor == 0 && NumMomo % Divisor == 0)
	{
		cout << "both win" << endl;
	}
	else 	if (NumMemo % Divisor == 0 && NumMomo % Divisor != 0)
	{
		cout << "Memo win" << endl;
	}
	else 	if (NumMemo % Divisor != 0 && NumMomo % Divisor == 0)
	{
		cout << "Momo win" << endl;
	}
	else
		cout << "Nobody wins" << endl;
}