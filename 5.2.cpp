#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cout << "write the N" << endl;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		k = 0;
		for (int a = 1; a < (i / 2 + 1); a++)
		{
			if (i % a == 0)
			{
				k += 1;
			}
		}
		if (k == 1)
			cout << i << endl;
	}
}