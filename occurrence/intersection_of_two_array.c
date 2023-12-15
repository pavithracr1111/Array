#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[4]={2,3,4,5};
    int i=0,j=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
            }
        }
    }
}