#include<iostream>
using namespace std;

int count_occurances(int arr[],int n,int key)
{
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int key;
    int arr[n];
    cout<<"Elements are:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to count:";
    cin>>key;
    cout<<"Element "<<n<<" count for "<<count_occurances(arr,n,key)<<" times ";
}