#include <iostream>
using namespace std;
int reverse_number(int num)
{
    int count =0;
    while(num>0)
    {
       int digit = num % 10;
       cout<<digit<<" ";
       count++;
       num /= 10;
    }
    return count;
    
}

int main() 
{
    int num;
    cout<<"Enter the Number:";
    cin>>num;
    cout<<"\nReverse number is:\n";

    int ans=reverse_number(num);
    cout<<"\nNumber of Digits:"<<ans;
}
