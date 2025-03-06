#include<iostream>
using namespace std;

int check_maximum(int a,int b,int c)
{
   if(a>b && a>c){
    return a;
   }
   else if(b>a && b>c){
    return b;
   }
    else{
        return c;
    }


}
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers:";
    cin>>a>>b>>c;
    cout<<"Maximum is:"<<check_maximum(a,b,c);
    
}