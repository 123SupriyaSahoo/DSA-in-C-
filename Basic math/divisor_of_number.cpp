#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Divisors are:";
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }

}