#include<stdio.h>
int main()
{
    int n=5,m=3,p=n+m;
    int a[5]={1,2,3,4,5};
    int b[3]={60,70,80};
    int loc=2;
    for(int i=n-1;i>=loc;i--)
    {
        a[i+m]=a[i];
    }

    for(int i=0;i<m;i++)
    {
        a[i+loc]=b[i];
    }
    for(int i=0;i<p;i++)
    {
        printf("%d ",a[i]);
    }
}