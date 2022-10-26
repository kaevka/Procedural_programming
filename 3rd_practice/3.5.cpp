#include <iostream>
#include <fstream>
#include <windows.h>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(0, "");
	string fs = "text2.txt";
	fstream f;
	string s;
	f.open(fs, fstream::in | fstream::out | fstream::app);
	SetConsoleCP(1251);
	cin >> s;
	f << s << "\n";
	SetConsoleCP(866);
	f.close();
	f.open(fs, fstream::in | fstream::out | fstream::app);
	string str;
	int a = 0;
	f >> str;
	sort(str.begin(), str.end());
	cout << str;
	system("pause");
	return(0);
}
