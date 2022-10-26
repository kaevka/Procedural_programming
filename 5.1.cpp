
#include <iostream>
using namespace std;
int NOD_d(int a, int b, int c)
{
	if (a < b)
		swap(a, b);
	while (a % b != 0)
		if (a % b != 0)
		{
			a = a % b;
			swap(a, b);
			c = b;
		}
	return c;
}
int main()
{
	setlocale(0, "russian");
	int a, b, c;
	c = 0;
	cout << "Введите число 1" << endl;
	cin >> a;
	cout << "Введите число 2" << endl;
	cin >> b;
	cout << "НОД делением = " << NOD_d(a, b, c) << endl;
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	cout << "НОД вычетанием = " << a << endl;
	system("pause");
	return 0;
}