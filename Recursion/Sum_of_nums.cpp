#include<iostream>
using namespace std;
int sumofnums(int n){
    if(n==1){
        return 1;
    }
    return n + sumofnums(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"sum of "<<n<<" nums is:"<<sumofnums(n);

}