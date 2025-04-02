#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter a String:";
    cin.getline(str,100);
    cout<<"Output:"<<str<<endl;;
    cout<<str[4];

}