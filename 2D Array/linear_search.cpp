#include<iostream>
using namespace std;
bool linearsearch(int arr[][10],int m,int n,int key){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
    if(arr[i][j]==key){
        return true;
    }
}

    }
    return false;
}
int main(){
    int m,n,key;
    cout<<"Enter number of rows:";
    cin>>m;
    cout<<"Enter number of columns:";
    cin>>n;
    int arr[10][10];
    cout<<"Enter elements of matrix:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix is:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter Key to be searched:";
    cin>>key;

    bool found=linearsearch(arr,m,n,key);
if(found){
    cout<<"Key found";
}
else{
    cout<<"Not found";
}
}