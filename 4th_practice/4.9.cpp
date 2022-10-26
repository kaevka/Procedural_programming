#include <iostream>
#include <vector>
#include <numeric>
#include <stdlib.h>
#include <string>
using namespace std;

vector <int> chislo(vector <int>& a, string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
			a.push_back(1);
		if (s[i] == '2')
			a.push_back(2);
		if (s[i] == '3')
			a.push_back(3);
		if (s[i] == '4')
			a.push_back(4);
		if (s[i] == '5')
			a.push_back(5);
		if (s[i] == '6')
			a.push_back(6);
		if (s[i] == '7')
			a.push_back(7);
		if (s[i] == '8')
			a.push_back(8);
		if (s[i] == '9')
			a.push_back(9);
		if (s[i] == 'A')
		{
			a.push_back(10);
		}
		if (s[i] == 'B')
		{
			a.push_back(11);
		}
		if (s[i] == 'C')
		{
			a.push_back(12);
		}
		if (s[i] == 'D')
		{
			a.push_back(13);
		}
		if (s[i] == 'E')
		{
			a.push_back(14);
		}
		if (s[i] == 'F')
		{
			a.push_back(15);
		}
		if (s[i] == '0')
			a.push_back(0);
	}
	return a;
}

void resultat(int chis, int n2)
{
	vector <char> ost;
	int k, por = 0;
	while (chis >= n2)
	{
		k = chis % n2;
		ost.push_back(k);
		chis = chis / n2;
		por++;
	}
	ost.push_back(chis);
	reverse(ost.begin(), ost.end());
	for (int i = 0; i <= por; i++)
	{
		if (ost[i] == 0)
			ost[i] = '0';
		if (ost[i] == 1)
			ost[i] = '1';
		if (ost[i] == 2)
			ost[i] = '2';
		if (ost[i] == 3)
			ost[i] = '3';
		if (ost[i] == 4)
			ost[i] = '4';
		if (ost[i] == 5)
			ost[i] = '5';
		if (ost[i] == 6)
			ost[i] = '6';
		if (ost[i] == 7)
			ost[i] = '7';
		if (ost[i] == 8)
			ost[i] = '8';
		if (ost[i] == 9)
			ost[i] = '9';
		if (ost[i] == 10)
			ost[i] = 'A';
		if (ost[i] == 11)
			ost[i] = 'B';
		if (ost[i] == 12)
			ost[i] = 'C';
		if (ost[i] == 13)
			ost[i] = 'D';
		if (ost[i] == 14)
			ost[i] = 'E';
		if (ost[i] == 15)
			ost[i] = 'F';
	}
	cout << "Ваш результат: " << endl;
	for (int i = 0; i <= por; i++)
		cout << ost[i];
	cout << endl;
}


int f(int x, int y)
{
	return x * 10 + y;
}

int main()
{
	setlocale(0, "russian");
	string s;
	int n1, n2;
	cout << "Введите исходное число" << endl;
	cin >> s;
	cout << "Введите исходную систему счисления" << endl;
	cin >> n1;
	cout << "Введите желаемую систему счисления" << endl;
	cin >> n2;
	vector <int> a;
	chislo(a, s);
	int c, res = 0;
	if (n1 != 10)
	{
		for (int i = 0; i < a.size(); i++)
		{
			c = a[i] * pow(n1, a.size() - 1 - i);
			res = res + c;
		}
		resultat(res, n2);
	}
	else
	{
		int n, chis = 0;
		n = a.size();
		for (int i = 0; i < a.size(); i++)
		{
			chis += a[i] * pow(10, a.size() - 1 - i);
		}
		resultat(chis, n2);
	}
	system("pause");
	return 0;
}
