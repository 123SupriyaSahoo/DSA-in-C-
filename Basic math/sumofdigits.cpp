#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    
    int sum=0;
    while(n > 0)
    {
        // cin>>digit;
        int digit = n % 10;
        sum += digit;
        n/=10;
    }
    
    cout<<"sum is:"<<sum;
}