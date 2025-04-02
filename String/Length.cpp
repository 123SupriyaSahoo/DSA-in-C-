#include<iostream>
using namespace std;

int main()
{
    char str[8];
    cout<<"Enter a String:";
    int len=0;
    cin.getline(str,100);
    for(int i=0;i<str[i]!='\0';i++){
        len++;
    }
    cout<<"Length of string:"<<len<<endl;

}