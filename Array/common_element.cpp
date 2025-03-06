#include <iostream>
using namespace std;

void check_common(int m,int n,int arr1[],int arr2[])
{
    for(int i=0;i<=m;i++)
    {
            for(int j=0;j<=n;j++)
            {
                if(arr1[i]==arr2[j])
                {
                    cout<<arr1[i]<<" ";
                }
            }
    }
    cout<<endl;
}

int main()
{
    int m,n;
    cout<<"Enter the no.of elements for array 1:";
    cin>>m;
    cout<<"Enter the no.of elements for array 2:";
    cin>>n;
    int arr1[m];
    cout<<"The elements for array 1 are:";
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    int arr2[n];
    cout<<"The elements for array 2 are:";
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    cout<<"common elements are:";
    check_common(m,n,arr1,arr2);
}