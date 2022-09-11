#include<iostream>
using namespace std;
/*
Given two numbers N and M . print the summation of their last digits.
example:12+13======>2+3=5
*/
int main()
{
	int M, N, RemainderM, RemainderN, sumRmRn;
	cin >> M >> N;
	RemainderM = M % 10;
	RemainderN = N % 10;
	sumRmRn = RemainderM + RemainderN;
	cout << sumRmRn << endl;
	return 0;
}