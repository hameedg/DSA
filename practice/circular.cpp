#include <iostream>
using namespace std;

int fact(int n)
{
    if (n > 1)
        return n * fact(n - 1);
    else
        return 1;
}

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    cout << 2 * fact(n - 1);

    return 0;
}