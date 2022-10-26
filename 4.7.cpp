#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int m, i, c, s, s1;
	cout << "m=" << endl;
	cin >> m;
	cout << "i=" << endl;
	cin >> i;
	cout << "c=" << endl;
	cin >> c;
	vector <int> v;
	s = 0;
	for (int a = 0; a < i; a++)
	{
		s1 = (m * s) + i;
		cout << s1 << endl;
		s = s1;
	}
	system("pause");
	return 0;
}