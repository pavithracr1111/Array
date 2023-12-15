#include<stdio.h>
#include<math.h>
int main()
{
    int n=6;
    int arr[]={0,-9,1,3,-4,5};
    int mx=-1999999;

   for(int i=0;i<n;i++)
   {
        mx=fmax(mx,arr[i]);     //fmax for floating point numbers and max for integers
        printf("%d ",mx);
   }
   
    
}