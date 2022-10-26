//5.4
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "russian");
	int n;
	cout << "Введите n" << endl;
	cin >> n;
	double sum = 0;
	double sumsin = 0;
	for (int i = 1; i <= n; i++)
	{
		sumsin += sin(i);
		sum += i / sumsin;
	}
	cout << sum;
}
