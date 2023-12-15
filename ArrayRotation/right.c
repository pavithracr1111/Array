#include<stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6};
    int n=6;
    int temp=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=temp;

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}