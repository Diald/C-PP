#include<iostream>
using namespace std; 
int Selection_Sort(int n, int arr[]){

}
int Bubble_Sort(int n, int arr[]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return arr[];
}
int Insertion_Sort(int n, int arr[]){
    for(int i=1 ; i<n ; i++){
        int temp = arr[i];
        int j = i-1;
        while(arr[j]>arr[i]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j] = temp;
    }
    return arr[];
}
int main(){
    int n = 3, arr[]={3,2,1};
    cout<<Insertion_Sort(n,arr);
}
