#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    int max=arr[0];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Largest Element is:"<<max;
    
}