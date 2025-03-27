#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"The elements are:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    cout<<"sorted array:";
    print_array(arr,n);
}