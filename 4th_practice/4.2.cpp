#include <iostream>
using namespace std;
void znaki(int a)
{
	if (a == 0)
		cout << "0" << endl;
	if (a > 0)
		cout << "1" << endl;
	if (a < 0)
		cout << "-1" << endl;
}
int main()
{
	int a;
	setlocale(0, "russian");
	cout << "ââåäèòå ÷èñëî" << endl;
	cin >> a;
	znaki(a);
	system("pause");
	return 0;
}
