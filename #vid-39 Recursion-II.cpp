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
int main(){
    int arr[]={1,2,3,6,5};
    cout<< issorted(arr,5)<<"\n";
    int n;
    cin>>n;

    cout<<dec(n)<<"\n";
    inc(n);
}