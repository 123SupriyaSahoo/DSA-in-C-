#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int size = 5;
    int arr[] = {1,5,7,4,6};
    int smallest=INT_MAX;
    for(int i=0;i<size;i++)
    {
        smallest=min(arr[i],smallest);
    }
    cout<<"smallest="<<smallest<<endl;
}