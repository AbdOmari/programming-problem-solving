#include <iostream>
using namespace std;
int main()
{
	int x, y;
	char opr;
	cin >> x >> opr >> y;
	switch (opr)
	{
	case'=':
		if (x == y) {
			cout << "right";
		}
		else if (x != y)
		{
			cout << "wrong";
		}
		break;
	case'>':
		if (x > y)

			cout << "right";

		else
			cout << "wrong";
		break;
	case'<':
		if (x < y)
			cout << "right";
		else
			cout << "wrong";
		break;

	}

}