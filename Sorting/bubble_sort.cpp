#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={3,5,2,1,4};
    int counter=0;
    while(counter<n-1)
    {
        for(int i=0;i<n-1-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
        
       
    

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}