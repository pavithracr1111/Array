#include<stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6};
    int n=6;
    int temp=a[0];
    for(int i=1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}