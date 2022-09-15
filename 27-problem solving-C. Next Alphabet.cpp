#include<iostream>
using namespace std;
int main()
{
	char letter;
	cin >> letter;
	int askchar = letter;
	if (askchar == 122) {
		cout << "a" << endl;
		return 0;
	}
	++letter;
	cout << letter << endl;


}