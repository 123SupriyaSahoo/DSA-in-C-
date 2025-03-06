#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three nbumbers:";
    cin>>a>>b>>c;
    int secondlargest;
    if((a>b && a<c)||(a>c && a<b))
    {
        secondlargest=a;
    }
    else if((b>a && b<c)||(b>c && b>a))
    {
        secondlargest=b;
    }
    else{
        secondlargest=c;
    }
    cout<<"The second largest number is:"<<secondlargest;
}