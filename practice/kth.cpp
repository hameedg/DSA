#include <iostream>
using namespace std;

int main()
{

    int n, k, count = 0, arr[n], j = 0;
    cout << "Enter number::" << endl;
    cin >> n;
    cout << "Enter k value::" << endl;
    cin >> k;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i;
            j++;
            count++;
        }
    }

    return 0;
}