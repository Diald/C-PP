#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool issorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool rest_arr= issorted(arr+1, n-1);
    return (arr[0]<arr[1] && rest_arr);
}
int dec(int n){
    if(n==1)
       return 1;
    cout<<n;
    dec(n-1);
}
int inc(int n){
    if(n==1)
        cout<<1;
    inc(n-1);
    cout<<n;
}
// to find first and last occurance of an element 
int firstOcc(int arr[],int n, int i, int key){
    if(i==n){
        return -1;}
    if(arr[i] == key){
        return i;}
    firstOcc(arr,n,0,i+1,key);
}
int lastOcc(int arr[], int n, int i, int key){
    int a = lastOcc(arr,n,i+1,key);
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    if(a!=-1){
        return a;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,6,5};
    cout<< issorted(arr,5)<<"\n";
    int n;
    cin>>n;

    cout<<dec(n)<<"\n";
    inc(n);
}
