#include <stdio.h>


int main()
{
    int n =6;
    int a[6] = {1, 2, 3, 4, 5, 0}; 
    int loc = 3;
    int ele = 100;

    for (int i = n - 2; i >= loc; i--) 
    {
        a[i + 1] = a[i]; // shifting elements to the right
    }
    a[loc] = ele; 

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}