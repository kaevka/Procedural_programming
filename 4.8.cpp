//4.8

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "russian");
	int n1[4] = {};
	int n2[4] = {};
	int n3[4] = {};
	float cena[4] = {};
	float komiss[4] = {};
	cout << "Введите количество проданных товаров продавцом №1" << endl;
	for (int i = 0; i < 4; i++)
		cin >> n1[i];
	cout << "Введите количество проданных товаров продавцом №2" << endl;
	for (int i = 0; i < 4; i++)
		cin >> n2[i];
	cout << "Введите количество проданных товаров продавцом №3" << endl;
	for (int i = 0; i < 4; i++)
		cin >> n3[i];
	cout << "Введите цены товаров" << endl;
	for (int i = 0; i < 4; i++)
		cin >> cena[i];
	cout << "Введите комиссионные для товаров" << endl;
	for (int i = 0; i < 4; i++)
		cin >> komiss[i];
	float max = 0, min = 1000, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, maxn = 0, minn = 0;
	float sum11 = 0, sum12 = 0, sum13 = 0, maxkom = 0, minkom = 1000, maxk, mink;
	float summacen = 0, summakom = 0;
	//n1
	for (int i = 0; i < 4; i++)
	{
		sum1 += n1[i] * cena[i];
		sum11 += n1[i] * komiss[i];
	}
	summacen += sum1;
	summakom += sum11;
	if (sum1 > max)
	{
		max = sum1;
		maxn = 1;
	}
	if (sum1 < min)
	{
		min = sum1;
		minn = 1;
	}

	if (sum11 > maxkom)
	{
		maxkom = sum11;
		maxk = 1;
	}
	if (sum11 < minkom)
	{
		minkom = sum11;
		mink = 1;
	}
	//n2
	for (int i = 0; i < 4; i++)
	{
		sum2 += n2[i] * cena[i];
		sum12 += n2[i] * komiss[i];
	}
	summacen += sum2;
	summakom += sum12;
	if (sum2 > max)
	{
		max = sum2;
		maxn = 2;
	}
	if (sum2 < min)
	{
		min = sum2;
		minn = 2;
	}

	if (sum12 > maxkom)
	{
		maxkom = sum12;
		maxk = 2;
	}
	if (sum12 < minkom)
	{
		minkom = sum12;
		mink = 2;
	}
	//n3
	for (int i = 0; i < 4; i++)
	{
		sum3 += n3[i] * cena[i];
		sum13 += n3[i] * komiss[i];
	}
	summacen += sum3;
	summakom += sum13;
	if (sum3 > max)
	{
		max = sum3;
		maxn = 3;
	}
	if (sum3 < min)
	{
		min = sum3;
		minn = 3;
	}

	if (sum13 > maxkom)
	{
		maxkom = sum13;
		maxk = 3;
	}
	if (sum13 < minkom)
	{
		minkom = sum13;
		mink = 3;
	}

	//output
	cout << "1) Какой продавец выручил больше всего денег с продажи, какой меньше?" << endl;
	cout << "Больше всего выручил продавец №" << maxn << endl;
	cout << "Меньше всего выручил продавец №" << minn << endl;

	cout << "2) Какой получил наибольшие комиссионные, какой наименьшие?" << endl;
	cout << "Наибольшие комиссионные получил продавец №" << maxk << endl;
	cout << "Наименьшие комиссионные получил продавец №" << mink << endl;

	cout << "3)Чему равна общая сумма денег, вырученных за проданные товары?" << endl;
	cout << "Общая сумма денег = " << summacen << endl;

	cout << "4) Сколько всего комиссионных получили продавцы?" << endl;
	cout << "всего комиссионных = " << summakom << endl;

	cout << "5) Чему равна общая сумма денег, прошедших через руки продавцов?" << endl;
	cout << "Через руки продавцов прошло " << summacen + summakom << "рублей" << endl;
}