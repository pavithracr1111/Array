#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {3, 5, 2, 1, 4};
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
         j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}