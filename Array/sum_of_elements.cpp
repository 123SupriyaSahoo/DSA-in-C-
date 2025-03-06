#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"The elements are:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum is:"<<sum;
}