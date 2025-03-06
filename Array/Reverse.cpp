#include<iostream>
using namespace std;
void reverse_array(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"The elements are:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse_array(arr,n);
}
