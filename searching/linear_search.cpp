#include<iostream>
using namespace std;
int linearsearch(int* arr,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n=5;
    int arr[n]={3,5,2,1,4};
    int key=2;
    cout<<linearsearch(arr,n,key);
}