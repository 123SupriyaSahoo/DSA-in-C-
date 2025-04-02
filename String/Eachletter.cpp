#include<iostream>
using namespace std;

int main()
{
    char str[8];
    cout<<"Enter a String:";
    cin.getline(str,100);
    for(char ch:str){
        cout<<ch<<" ";
    }
    //for(int i=0;i<str[i]!='\0';i++)
    cout<<endl;
}