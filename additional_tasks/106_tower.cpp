#include <iostream>
using namespace std;
int hanoi(int n, int a, int c, int b)
{
    int st=0;
    if (n != 0)
    {
        st+=hanoi(n - 1, a, b, c);
        cout << a << " => " << c << endl;
        st += 1;
        st+=hanoi(n - 1, b, c, a);
    }
    else
        return st;
}
int main()
{
    setlocale(0, "russian");
    int a, c, b, n, st, i;
    a = 1;
    b = 2;
    c = 3;
    cout << "Введите количество дисков:" << endl;
    cin >> n;
    st = 1;
    if (n == 64)
        cout << "Никто не хочет конца света, задача не будет решена" << endl;
    else
        cout << "Общее число перемещений: " << hanoi(n, a, c, b) << endl;
    return 0;
}
