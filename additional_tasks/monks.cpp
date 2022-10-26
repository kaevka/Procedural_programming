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
					cout << "Ó÷èòåëü  ìîíàõà ïîä íîìåðîì " << a[por] << " - " << a[por1] << endl;
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
		cout << "Ìîíàõ ïîä íîìåðîì " << num << " ñóùåñòâóåò" << endl;
	else
		cout << "Ìîíàõà ïîä íîìåðîì " << num << " íå ñóùåñòâóåò" << endl;
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
	string path = "C:\\Users\\Åâà\\Desktop\\visual studio\\txtmonah.txt";
	f.open(path, fstream::in);
	while (!f.eof())
	{
		f >> str;
		va = stoi(str);
		a.push_back(va);
	}
	f.close();
	//åñëè ïîðÿäîê êðàòåí 4 èëè ðàâåí íóëþ, òî ÷èñëî ñòîèò ïåðâûì â ñòðîêå = ìîíàõ ÿâëÿåòñÿ ó÷èòåëåì
	cout << "Ââåäèòå êîëè÷åñòâî ìîíàõîâ, èíôîðìàöèþ î êîòîðûõ Âû õîòèòå óçíàòü" << endl;
	cin >> n;
	if (n == 1)
	{
		int por;
		cout << "Ââåäèòå íîìåð ìîíàõà" << endl;
		cin >> num;
		for (int i = 0; i < 24; i++)
			if (num == a[i])
			{
				por = (i / 4) * 4;
				proverka1(a, por);
				k += 1;
			}
		if (k < 1)
			cout << "Òàêîãî ìîíàõà íå ñóùåñòâóåò" << endl;
	}
	if (n == 2)
	{
		vector <int> nu1;
		vector <int> nu2;
		int por1, por2;
		cout << "Ââåäèòå íîìåðà ìîíàõîâ" << endl;
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
										cout << "Îáùèé ó÷èòåëü - " << nu1[v] << endl;
										system("pause");
									}
						}
					}
				}
		}
	}
	if ((n != 1) and (n != 2))
		cout << "Ìîæíî óçíàòü èíôîðìàöèþ òîëüêî îá îäíîì èëè äâóõ ìîíàõàõ" << endl;
	system("pause");
	return 0;
}
