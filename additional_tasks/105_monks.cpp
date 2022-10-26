#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
void proverka1(vector <int> a, int por)
{
	int por1;
	while (a[por] != 1)
	{
		for (int l = 0; l < 24; l++)
			if (a[por] == a[l] and por != l)
			{
				por1 = (l / 4) * 4;
				if (a[por1] != 1)
					cout << "Учитель  монаха под номером " << a[por] << " - " << a[por1] << endl;
			}
		por = por1;
	}
}
vector <int> proverka2(vector <int> a, int por)
{
	int por1;
	vector <int> num;
	while (a[por] != 1)
	{
		for (int l = 0; l < 24; l++)
			if (a[por] == a[l] and por != l)
			{
				por1 = (l / 4) * 4;
				if (a[por1] != 1)
					num.push_back(a[por1]);
			}
		por = por1;
	}
	return num;
}
bool checker(vector <int> a, int num)
{
	int k = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == num)
			k += 1;
	}
	if (k >= 1)
		cout << "Монах под номером " << num << " существует" << endl;
	else
		cout << "Mонаха под номером " << num << " не существует" << endl;
	if (k >= 1)
		return 1;
	else
		return 0;
}
int main()
{
	fstream f;
	setlocale(0, "russian");
	string str;
	vector <int> a;
	int va, n, num, num1, num2, k = 0;
	string path = "txtmonah.txt";
	f.open(path, fstream::in);
	while (!f.eof())
	{
		f >> str;
		va = stoi(str);
		a.push_back(va);
	}
	f.close();
	cout << "Введите количество монахов, информацию о которых Вы хотите узнать" << endl;
	cin >> n;
	if (n == 1)
	{
		int por;
		cout << "Введите номер монаха" << endl;
		cin >> num;
		for (int i = 0; i < 24; i++)
			if (num == a[i])
			{
				por = (i / 4) * 4;
				proverka1(a, por);
				k += 1;
			}
		if (k < 1)
			cout << "Tакого монаха не существует" << endl;
	}
	if (n == 2)
	{
		vector <int> nu1;
		vector <int> nu2;
		int por1, por2;
		cout << "Введите номера монахов" << endl;
		cin >> num1 >> num2;
		if (checker(a, num1) == 1 and checker(a, num2) == 1)
		{
			for (int i = 0; i < 24; i++)
				if (num1 == a[i])
				{
					por1 = (i / 4) * 4;
					for (int l = 0; l < 24; l++)
					{
						if (num2 == a[l])
						{
							por2 = (l / 4) * 4;
							nu1 = proverka2(a, por1);
							nu2 = proverka2(a, por2);
							for (int v = 0; v < nu1.size(); v++)
								for (int f = 0; f < nu2.size(); f++)
									if (nu1[v] == nu2[f])
									{
										cout << "Общий учитель - " << nu1[v] << endl;
										system("pause");
									}
						}
					}
				}
		}
	}
	if ((n != 1) and (n != 2))
		cout << "Можно узнать информацию только об одном или двух монахах" << endl;
	system("pause");
	return 0;
}
