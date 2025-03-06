#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the  number:";
    cin>>n;
    int temp=n;
    int rev=0,k;
    while(n>0)
    {
        k=n%10;
        rev=rev*10+k;
        n=n/10;
    }
    if(rev==temp)
    {
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not pallindrome"<<endl;
    }
return 0;
}