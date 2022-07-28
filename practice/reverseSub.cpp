#include <iostream>
using namespace std;

void reverseSub(int arr[], int n, int k)
{

    for (int i = 0; i < n; i += k)
    {
        int left = i;

        int right = min(i + k - 1, n - 1);

        while (left < right)
            swap(arr[left++], arr[right--]);
    }
}
void swap(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{
    int arr[100], n, k;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    cout << "Enter the array Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the breakpoint to get reverse of sub arrays:" << endl;
    cin >> k;
    cout << "Array before operation......." << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";
    reverseSub(arr, n, k);
    cout << "Reversing the subarrays from point at  " << k << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}