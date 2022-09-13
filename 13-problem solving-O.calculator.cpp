#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string equ;
	cin >> equ;
	int IndexOpr;
	char CharOpr;
	string num1, num2;
	int num1Int, num2Int;
	for (int i = 0; i < equ.size(); i++)
	{
		if (equ[i] == '+' || equ[i] == '-' || equ[i] == '*' || equ[i] == '/') {
			IndexOpr = i;
			CharOpr = equ[i];
			break;
		}
	}
	num1 = equ.substr(0, IndexOpr);
	num2 = equ.substr(IndexOpr + 1);
	stringstream ss1;
	ss1 << num1;
	ss1 >> num1Int;
	stringstream ss2;
	ss2 << num2;
	ss2 >> num2Int;
	switch (CharOpr)
	{
	case '+':
		cout << num1Int + num2Int << endl;
		break;
	case '-':
		cout << num1Int - num2Int << endl;
		break;
	case '*':
		cout << num1Int * num2Int << endl;
		break;
	case '/':
		cout << num1Int / num2Int << endl;
		break;
	}
}