#include<iostream>
using namespace std;

int linear_search(int arr[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
    {
            return 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"The elements are:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element you want to search";
    cin>>key;
    cout<<"The element "<<key<<" is found at index "<<linear_search(arr,n,key);
}