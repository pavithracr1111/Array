#include<iostream>
using namespace std;
int binarysearch(int* arr,int n,int key)
{
    int s=0,e=n;
    
    while(s<e)
    {
            int mid=(s+e)/2;
            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]>key)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        

    }
}
int main()
{
    int n=5;
    int arr[n]={3,5,2,1,4};
    int key=2;
    cout<<binarysearch(arr,n,key);
}