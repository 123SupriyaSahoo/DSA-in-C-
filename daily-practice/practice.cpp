// //Sum of two numbers
// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     int b;
//     int sum;
//     cout<<"Enter a:"<<endl;
//     cin>>a;
//     cout<<"Enter b:"<<endl;
//     cin>>b;
//     sum=a+b;
//     cout<<"sum is:"<<sum;
    
// }


#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,7,8};
    int size = sizeof(arr) / sizeof (arr[0]);
    cout<<"Array elements are:";
    for(int i=0;i<size;++i){
        cout<<arr[i]<<endl;
    }
    cout<<"Reverse of array";
    for(int i=size-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}