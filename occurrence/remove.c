#include <stdio.h>

int main()
{   
     int a[7] = {1, 2, 2, 3, 4, 4, 5};
    int temp[7];

    int n = (sizeof(a) / sizeof(a[0]));
    
    int j = 0;
   
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            temp[j] = a[i];
            j++;
        }
    }
    temp[j] = a[n - 1];

    for (int i = 0; i <= j; i++)
    {
        printf("%d ", temp[i]);
    }
}