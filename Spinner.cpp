#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "russian");
	int lopast, k4 = 0, k3 = 0;
	cout << "������� ���������� ��������� �������� " << endl;
	cin >> lopast;
	if ((lopast % 4) < 3 and lopast >= 3)
	{
		if ((lopast % 4) > 0)
		{
			while (lopast % 4 != 0)
			{
				lopast = lopast - 3;
				k3 += 1;
			}
		}
		k4 = lopast / 4;
	}
	else
		if (lopast >= 3)
		{
			k4 = lopast / 4;
			k3 = lopast % 4;
		}
	cout << "���������� ��������� � 4 ��������� = " << k4 << endl;
	cout << "���������� ��������� � 3 ��������� = " << k3 << endl;
	system("pause");
	return 0;
}