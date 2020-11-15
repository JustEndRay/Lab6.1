#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

int Isum(int a[], const int size);
int Icount(int a[], const int size);
void Iswap(int a[], const int size);
int Rsum(int a[], const int i);
void Rswap(int zam[], const int size);
int Rcount(int a[], const int size, int k);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand((unsigned)time(NULL));

    int r;
    const int size = 23;
    int a[size];

    cout << "a[] = ";
    for (r = 0; r < 23; r++)
    {
        a[r] = 4 + rand() % 13;
        cout << a[r] << " ";
    }
    cout << endl;

    cout << endl;
    cout << "Спосіб 1(ітераційний):" << endl;
    cout << "Кількість вибраних елементів:" << Icount(a, size) << endl;
    cout << "Сума вибраних елементів: " << Isum(a, size) << endl;
    cout << "Модифікований масив:";
    Iswap(a, size);
    cout << endl;
    cout << "Спосіб 2(рекурсивний):" << endl;
    cout << "Кількість вибраних елементів:" << Rcount(a, 0, 0) << endl;
    cout << "Cума вибраних елементів: " << Rsum(a, 0) << endl;
    cout << "Модифікований масив:";
    Rswap(a, 0);
    cout << endl;
    return 0;
}
int Isum(int a[], const int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0 && i % 3 == 0) {}
        else { s += a[i]; }
    }
    return s;
}
int Icount(int a[], const int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0 && i % 3 == 0)
            k++;
    }
    return k;
}
void Iswap(int a[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0 && i % 3 == 0)
            cout << 0 << "  ";
        else
            cout << a[i] << "  ";
    }
}
int Rsum(int* arr, int i)
{
    if (i == 22)
        return 0;
    else if (arr[i] % 2 != 0 && i % 3 == 0)
        Rsum(arr, i + 1);
    else
        return arr[i] + Rsum(arr, i + 1);
}
int Rcount(int a[], const int i, int k)
{
    if (a[i] % 2 != 0 && i % 3 == 0)
        k++;
    if (!(i < 22))
        return k;
    else
        return Rcount(a, i + 1, k);
}
void Rswap(int ch[], const int i)
{
    if (ch[i] % 2 != 0 && i % 3 == 0)
        cout << 0 << "  ";
    else
        cout << ch[i] << "  ";
    if (i < 22)
        Rswap(ch, i + 1);
}

