#include<iostream>
using namespace std;

void readmat(int arr[][10],int m,int n)
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
}
void printmat(int arr[][10],int m,int n)
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int arr[][10],int m,int n)
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            arr[i][j]==arr[j][i];
        }
    }
}

int main()
{
    int n,m;
    cout<<"Enter number of rows and columns:";
    cin>>m>>n;
    int arr[m][10];
    cout<<"Enter the elements:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }   
 }
 readmat(arr,m,n);
 printmat(arr,m,n);
 transpose(arr,m,n);

    
}