#include <iostream>
#include <vector>
using namespace std;

void rotated(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main()
{
    int n;
    vector<vector<int>> &matrix;
    cout << "enter size:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    rotated(matrix, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << matrix[i][j] << "";
        }
        cout << endl;
    }
}
