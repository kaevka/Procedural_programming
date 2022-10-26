#include <iostream>
using namespace std;
int main()
{
	int c0[4];
	int c1[4];
	int st1;
	string st;
	srand(time(NULL));
	for (int i = 0; i < 4; i++)
		c0[i] = rand() % 10;
	for (int i = 0; i < 4; i++)
		cout << c0[i];
	while (st != "++++")
	{
		st = "";
		cout << "enter" << endl;
		cin >> st1;
		c1[0] = st1 / 1000;
		c1[1] = st1 / 100 % 10;
		c1[2] = st1 / 10 % 10;
		c1[3] = st1 % 10;
		for (int i = 0; i < 4; i++)
		{
			if (c1[i] == c0[i])
				st += "+";
			else
			{
				for (int f = 0; f < 4; f++)
					if (c0[i] == c1[f])
						st += "-";
			}
		}
		cout << st << endl;
	}
}
