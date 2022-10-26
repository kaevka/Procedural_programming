#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 8; i++)
	{
		for (int a = 0; a < 6; a++)
			cout << "*";
		for (int b = 0; b < 18; b++)
			cout << "-";
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int c = 0; c < 24; c++)
			cout << "-";
		cout << endl;
	}
	system("pause");
	return 0;
}