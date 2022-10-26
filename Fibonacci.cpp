#include <iostream>
using namespace std;
int F(int n)
{
	if (n == 1 or n == 2)
		return 1;
	return F(n - 1) + F(n - 2);
}
int main()
{
	setlocale(0, "russian");
	int n;
	cout << "Введите какое число Фибоначчи Вы бы хотели увидеть" << endl;
	cin >> n;
	cout << F(n) << endl;
	system("pause");
	return 0;
}