
/*4.3 ������������*/

#include <iostream>
using namespace std;
void krug(double r)
{
	double s;
	s = 3.14 * r * r;
	cout << s;
}
void pryam()
{
	double a, b, s;
	cout << "������� �������" << endl;
	cin >> a >> b;
	s = a * b;
	cout << s << endl;
}
void treug()
{
	double a, h, s;
	cout << "������� �������" << endl;
	cin >> a >> h;
	s = a * h * 0.5;
	cout << s << endl;
}
int main()
{
	setlocale(0, "russian");
	string a;
	cout << "������� ���� �� ������ �����?" << endl;
	cin >> a;
	if (a == "circle")
	{
		double r;
		cout << "������� ������" << endl;
		cin >> r;
		krug(r);
	}
	if (a == "rectangle")
		pryam();
	if (a == "triangle")
		treug();
	system("pause");
	return 0;
}