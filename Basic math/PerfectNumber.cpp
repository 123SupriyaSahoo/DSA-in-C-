#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=1;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n&&n!=1){
        cout<<"Perfect number";
    }
    else{
        cout<<"Not a perfect number";
    }
}