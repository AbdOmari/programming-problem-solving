#include<iostream>
using namespace std;
int main() {
	int password;

	while (false)
	{
		cin >> password;
		if (password == 1999) {
			cout << "Correct" << endl;
			break;
		}
		else {
			cout << "False" << endl;;
		}
	}
}