#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream fs;
	string f = "C:\\Users\\���\\Desktop\\visual studio\\text.txt";
	fs.open(f, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open())
		cout << "������ � ����!!!" << endl;
	else
	{
		char ch;
		while (fs.get(ch))
		{
			if (isdigit(ch))
			{
				cout << ch;
			}
		}
	}
	system("pause");
	return 0;
}