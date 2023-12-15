#include <iostream>
using namespace std;
int main()
{
    int n = 5, m = 3, p = n + m;
    int a[n] = {3, 5, 2, 1, 4};
    int b[m] = {6, 7, 8};
    int c[p];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0, j = n; i < m && j < p; i++, j++)
    {
        c[j] = b[i];
    }

    for (int i = 0; i < p; i++)
    {
        cout << c[i] << " ";
    }
}