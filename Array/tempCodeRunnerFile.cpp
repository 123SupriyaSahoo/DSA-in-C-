#include<iostream>
using namespace std;

void check_duplicate(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the element:";
    cin>>n;
    int arr[n];
    cout<<"The elements are:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Duplicte elements are "<<check_duplicate(arr,n);
}