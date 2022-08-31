#include <iostream>
using namespace std;

int main()
{

    int n, count = 0;
    cout << "Enter the number";
    cin >> n;

    n = n % 10;
    if (n % 2 == 0)
    {

        cout << n;
    }

    return 0;
}