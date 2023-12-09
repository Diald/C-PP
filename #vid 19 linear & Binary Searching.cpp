#include <iostream>
#include<iterator>
using namespace std;
int BinarySearch(int n, int arr[], int key){
    int s = 0;
    int e = n;
    while(s<=e){
            int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;

}
int LinearSearch(int n, int arr[], int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter size of array= ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key ; ";
    cin>>key;
    cout<<"index by binary search is "<<BinarySearch(n,arr,key);
}
