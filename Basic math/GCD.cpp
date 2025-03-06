#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the values:"<<endl;
    cin>>a>>b;
    int min;
    int GCD=1;
    if(a>b)
    {
        min=b;
    }
    else
    {
        min=a;
    }
    for(int i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        {
            GCD=i;
        }
        else
        {
            cout<<"Invalid";
        }
    }
    cout<<"GCD is: "<<GCD;
}