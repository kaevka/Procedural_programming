#include <fstream>
#include <iostream> 
#include <clocale> 
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	setlocale(0, "russian");
	string path = "txt5.5.txt";
	fstream f;
	string str, igrushka1, igrushka2, igrushka3, igrushka4, igrushka5, igrushka6;
	int cena1, cena2, cena3, cena4, cena5, cena6;
	int ot1, ot2, ot3, ot4, ot5, ot6;
	int do1, do2, do3, do4, do5, do6;
	vector <string> a;
	int i;
	f.open(path, fstream::in);

	while (!f.eof())
	{
		str = " ";
		getline(f, str);
		a.push_back(str);
	}
	f.close();

	i = 0;
	igrushka1 = a[i];
	cena1 = stoi(a[i + 1]);
	ot1 = stoi(a[i + 2]);
	do1 = stoi(a[i + 3]);
	i += 5;
	igrushka2 = a[i];
	cena2 = stoi(a[i + 1]);
	ot2 = stoi(a[i + 2]);
	do2 = stoi(a[i + 3]);
	i += 5;
	igrushka3 = a[i];
	cena3 = stoi(a[i + 1]);
	ot3 = stoi(a[i + 2]);
	do3 = stoi(a[i + 3]);
	i += 5;
	igrushka4 = a[i];
	cena4 = stoi(a[i + 1]);
	ot4 = stoi(a[i + 2]);
	do4 = stoi(a[i + 3]);
	i += 5;
	igrushka5 = a[i];
	cena5 = stoi(a[i + 1]);
	ot5 = stoi(a[i + 2]);
	do5 = stoi(a[i + 3]);
	i += 5;
	igrushka6 = a[i];
	cena6 = stoi(a[i + 1]);
	ot6 = stoi(a[i + 2]);
	do6 = stoi(a[i + 3]);
	cout << "названия игрушек, цена которых не превышает 400 р., и которые подходят детям 8 лет" << endl;
	if (cena1 <= 400 and do1 >= 8)
		cout << igrushka1 << endl;
	if (cena2 <= 400 and do2 >= 8)
		cout << igrushka2 << endl;
	if (cena3 <= 400 and do3 >= 8)
		cout << igrushka3 << endl;
	if (cena4 <= 400 and do4 >= 8)
		cout << igrushka4 << endl;
	if (cena5 <= 400 and do5 >= 8)
		cout << igrushka5 << endl;
	if (cena6 <= 400 and do6 >= 8)
		cout << igrushka6 << endl;

	cout << endl;
	cout << "ценa самой дорогой игрушки" << endl;
	int max = 0;
	if (cena1 > max)
		max = cena1;
	if (cena2 > max)
		max = cena2;
	if (cena3 > max)
		max = cena3;
	if (cena4 > max)
		max = cena4;
	if (cena5 > max)
		max = cena5;
	if (cena6 > max)
		max = cena6;
	cout << max << endl;

	cout << endl;
	cout << "названия и цены игрушек, которые подходят одновременно детям 4 - х и 10 - и лет" << endl;
	if (ot1 <= 4 and do1 >= 10)
		cout << igrushka1 << " " << cena1 << endl;
	if (ot2 <= 4 and do2 >= 10)
		cout << igrushka2 << " " << cena2 << endl;
	if (ot3 <= 4 and do3 >= 10)
		cout << igrushka3 << " " << cena3 << endl;
	if (ot4 <= 4 and do4 >= 10)
		cout << igrushka4 << " " << cena4 << endl;
	if (ot5 <= 4 and do5 >= 10)
		cout << igrushka5 << " " << cena5 << endl;
	if (ot6 <= 4 and do6 >= 10)
		cout << igrushka6 << " " << cena6 << endl;

	system("pause");
	return 0;
}
