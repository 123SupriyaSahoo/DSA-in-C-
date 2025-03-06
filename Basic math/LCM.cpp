#include<iostream>
using namespace std;
int main()
{
    int a,b,LCM;
    cout<<"Enter two number:";
    cin>>a>>b;
    for (int i = (a > b ? a : b); ; i++) 
    {
        if(i%a==0 && i%b==0)
        {
            LCM=i;
            break;
        }
    }
    cout<<"The LCM of "<<a<<" and "<<b<<" is "<<LCM;

}