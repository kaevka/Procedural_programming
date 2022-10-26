#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

void zapis(vector <int> mass)
{
	fstream f1;
	string path1 = "C:\\Users\\Ева\\Desktop\\visual studio\\work.out.txt";
	f1.open(path1, fstream::in | fstream::out | fstream::app);
	int k = 0;
	while (k < 441)
	{
		for (int i = k; i < k + 21; i++)
		{
			f1 << mass[i] << " ";
		}
		f1 << endl;
		k += 21;
	}
	f1 << endl;
	f1 << endl;
	f1.close();
}
int main()
{
	fstream f;
	setlocale(0, "russian");
	vector <string> a;
	vector <int> mass;
	string str;
	string path = "C:\\Users\\Ева\\Desktop\\visual studio\\work.dat.txt";
	f.open(path, fstream::in);
	while (!f.eof())
	{
		f >> str;
		a.push_back(str);
	}
	f.close();
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == "X")
			mass.push_back(1);
		else
			mass.push_back(0);
	}
	zapis(mass);
	int n;
	cout << "Введите количество поколений: ";
	cin >> n;


	for (int m = 0; m < n; m++)
	{
		for (int i = 0; i < mass.size(); i++)
		{
			int k = 0;
			if (mass[i] == 12)
				mass[i] == 0;
			else
			{
				if (i == 0)
				{
					if (mass[i + 1] != 0)
						k += 1;
					if (mass[i + 21] != 0)
						k += 1;
					if (mass[i + 22] != 0)
						k += 1;
					if (k == 2 or k == 3)
						mass[i] += 1;
					if (k != 2 and k != 3)
						mass[i] = 0;
				}
				if (i == 20)
				{
					if (mass[41] != 0)
						k += 1;
					if (mass[40] != 0)
						k += 1;
					if (mass[19] != 0)
						k += 1;
					if (k == 2 or k == 3)
						mass[20] += 1;
					if (k != 2 and k != 3)
						mass[20] = 0;
				}
				if (i == 420)
				{
					if (mass[421] != 0)
						k += 1;
					if (mass[399] != 0)
						k += 1;
					if (mass[400] != 0)
						k += 1;
					if (k == 2 or k == 3)
						mass[420] += 1;
					if (k != 2 and k != 3)
						mass[420] = 0;
				}
				if (i == 440)
				{
					if (mass[439] != 0)
						k += 1;
					if (mass[419] != 0)
						k += 1;
					if (mass[418] != 0)
						k += 1;
					if (k == 2 or k == 3)
						mass[440] += 1;
					if (k != 2 and k != 3)
						mass[440] = 0;
				}
				int ost = i % 21;
				if (ost >= 1 and ost <= 19 and i > 21 and i < 421)
				{
					if (mass[i + 1] != 0)
						k += 1;
					if (mass[i - 1] != 0)
						k += 1;
					if (mass[i + 21] != 0)
						k += 1;
					if (mass[i - 21] != 0)
						k += 1;
					if (mass[i - 20] != 0)
						k += 1;
					if (mass[i + 20] != 0)
						k += 1;
					if (mass[i - 22] != 0)
						k += 1;
					if (mass[i + 22] != 0)
						k += 1;
					if (k == 2 or k == 3)
						mass[i] += 1;
					if (k != 2 and k != 3)
						mass[i] = 0;
				}
				if (ost == 0 and i != 0 and i != 420)
				{
					if (mass[i + 1] != 0)
						k += 1;
					if (mass[i - 21] != 0)
						k += 1;
					if (mass[i + 21] != 0)
						k += 1;
					if (mass[i - 20] != 0)
						k += 1;
					if (mass[i + 22] != 0)
						k += 1;
					if (k == 2 or k == 3)
						mass[i] += 1;
					if (k != 2 and k != 3)
						mass[i] = 0;
				}
				if (ost == 20 and i != 440 and i != 20)
				{
					if (mass[i - 1] != 0)
						k += 1;
					if (mass[i - 21] != 0)
						k += 1;
					if (mass[i + 21] != 0)
						k += 1;
					if (mass[i + 20] != 0)
						k += 1;
					if (mass[i - 22] != 0)
						k += 1;
					if (k == 2 or k == 3)
						mass[i] += 1;
					if (k != 2 and k != 3)
						mass[i] = 0;
				}
				if (i >= 1 and i <= 19)
				{
					if (mass[i - 1] != 0)
						k += 1;
					if (mass[i + 1] != 0)
						k += 1;
					if (mass[i + 21] != 0)
						k += 1;
					if (mass[i + 20] != 0)
						k += 1;
					if (mass[i + 22] != 0)
						k += 1;
					if (k == 2 or k == 3)
						mass[i] += 1;
					if (k != 2 and k != 3)
						mass[i] = 0;
				}
				if (i >= 421 and i <= 439)
				{
					if (mass[i - 1] != 0)
						k += 1;
					if (mass[i + 1] != 0)
						k += 1;
					if (mass[i - 21] != 0)
						k += 1;
					if (mass[i - 20] != 0)
						k += 1;
					if (mass[i - 22] != 0)
						k += 1;
					if (k == 2 or k == 3)
						mass[i] += 1;
					if (k != 2 and k != 3)
						mass[i] = 0;
				}
			}
		}
		zapis(mass);
	}
	cout << "done" << endl;
	system("pause");
	return 0;
}