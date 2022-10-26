#include <iostream>
using namespace std;
bool sin(int i, int j)
{
	float tmp = sin(3.14 / 23 * j) * 10;
	if (i + 1 > tmp and i - 1 < tmp)
		return true;
	return false;
}
int main()
{
	for (int i = 10; i > -10; i--)
	{
		for (int j = -24; j < 24; j++)
		{
			if (i == 0)
				cout << "*";
			else if (j == 0)
				cout << "*";
			else if (sin(i, j))
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
