#include <iostream>
using namespace std;
int main()
{
    int n = 5, m = 3;
    int a[n] = {3, 5, 2, 1, 4};
    int b[m] = {6, 7, 8};
    for (int i = 0; i < m; i++)
    {
        a[n + i] = b[i];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << a[i] << " ";
    }
}