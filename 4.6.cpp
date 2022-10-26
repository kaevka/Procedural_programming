#include <iostream>
using namespace std;
int main()
{
	string a;
	int sum = 0;
	cout << "please write" << endl;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'I')
			sum += 1;
		if (a[i] == 'V')
			sum += 5;
		if (a[i] == 'X')
			sum += 10;
		if (a[i] == 'L')
			sum += 50;
		if (a[i] == 'C')
			sum += 100;
		if (a[i] == 'D')
			sum += 500;
		if (a[i] == 'M')
			sum += 1000;
	}
	cout << sum << endl;
}