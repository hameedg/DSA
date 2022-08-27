#include <iostream>
using namespace std;
void decrease(int n);
void increase(int n);
void alternate(int n);
void valley(int n);
void number(int n);
void ABCD(int n);
void AA(int n);
void ABCDcenter(int n);
void simple(int n);
void simpleInc(int n);
void numberInc(int n);
void numberConst(int n);
int main()
{
    int n;
    cout<<"Enter row size";
    cin >> n;
    increase(n);
    decrease(n);

    alternate(n);
    valley(n);
    number(n);
    ABCD(n);
    AA(n);
    ABCDcenter(n);
    simple(n);
    simpleInc(n);
    numberInc(n);
    numberConst(n);

    return 0;
}
void decrease(int n)
{
    int m = 1;
    for (int i = n; i >= 0; i--)
    {

        for (int j = 1; j <= (m - 1); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        m++;
        cout << endl;
    }
}
void increase(int n)
{
    int m = n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= m - 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        m--;
        cout << endl;
    }
}
void alternate(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == i % 2)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
}
void valley(int n)
{
    int m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= 2 * (m - 1); k++)
        {
            cout << " ";
        }
        for (int l = i; l > 0; l--)
        {
            cout << l;
        }
        m--;
        cout << endl;
    }
}
void number(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << sum << " ";
            sum++;
        }
        cout << endl;
    }
}
void ABCD(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 65; j < 65 + i; j++)
        {

            cout << (char)j << " ";
        }
        cout << endl;
    }
}
void AA(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(i + 64) << " ";
        }
        cout << endl;
    }
}
void ABCDcenter(int n)
{
    int m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (m - 1); j++)
        {
            cout << " ";
        }
        for (int k = 1; k < i; k++)
        {
            cout << char(64 + k);
        }
        for (int l = i; l > 0; l--)
        {
            cout << char(64 + l);
        }
        m--;
        cout << endl;
    }
}
void simple(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void simpleInc(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void numberInc(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void numberConst(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}