/*4.1 ïðàêòè÷åñêàÿ*/


#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	setlocale(0, "russian");
	string path = "C:\\Users\\Åâà\\Desktop\\visual studio\\4-1.txt";
	fstream f;
	f.open(path, fstream::in | fstream::out | fstream::app);
	for (int i = 0; i < 10; i++)     //íà÷àëî âïèñûâàíèÿ
	{
		double a;
		cin >> a;
		f << a << endl;
	}
	f.close();      //êîíåö âïèñûâàíèÿ
	double sum = 0.0;
	double b;
	f.open(path, fstream::in | fstream::out | fstream::app);
	while (f >> b)
	{
		sum += b;
	}
	f.close();
	cout << sum << endl;
	system("pause");
	return 0;
}
