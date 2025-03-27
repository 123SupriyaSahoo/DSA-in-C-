#include<iostream>
using namespace std;

int Binary_Search(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid=low + (high-low)/2;
    while(left<=right)
    {
        if(arr[mid]==key)
        {
            return mid;
        }  
        else if(arr[mid]<key)
        {
            return mid+1;
        }
        else 
        {
            return mid-1;
        }
    }

}

int main()
{
    int n;
    cout<<"Enter thr number of element:";
    cin>>n;
    int arr[n];
    cout<<"The elements are:";
    for(int i=0;i<n;i++)
    {  
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element you want to search:";
    cin>>key;
    cout<<"The element "<<key<<" found at index "<<Binary_Search(arr,n,key);
}