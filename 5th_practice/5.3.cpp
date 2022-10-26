//5.3
// Ïðåîáðàçîâàíèå ðàçäåëèòåëåé: çàìåíà ïðîáåëîâ íà äðóãèå(îïðåäåëåííûå) ñèìâîëû.
//My name is Eva Kapustyan
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "russian");
	string path = "C:\\Users\\Åâà\\Desktop\\visual studio\\txt5.3.txt";
	fstream f;
	f.open(path, fstream::out | fstream::in | fstream::app);
	char sym, bykva;
	cout << "Íà êàêîé ñèìâîë Âû áû õîòåëè çàìåíèòü ïðîáåë?" << endl;
	cin >> bykva;
	char arr[60] = {};
	int i = 0;
	while (f.get(sym))
	{
		if (sym == ' ')
			sym = bykva;
		arr[i] = sym;
		cout << arr[i];
		i++;
	}
	cout << i - 1 << endl
		f.close();
	f.open(path, fstream::out);
	for (int a = 0; a < (i - 1); a++)
		f << arr[a];
	f.close();
	system("pause");
	return 0;
}
