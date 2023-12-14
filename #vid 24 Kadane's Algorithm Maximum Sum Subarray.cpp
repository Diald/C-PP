#include<iostream>
#include<climits>
using namespace std;
int kadane(int n, int arr[]){
    int curr = 0; 
    int max_till_now = INT_MIN;
    for(int i= 0;i<n;i++){
        curr+=arr[i];
        if(curr<0){
            curr = 0;
        }
        max_till_now = max(curr,max_till_now);
    }
    return max_till_now;
}
//Maximum circular subarray 
//Kadane's Algorithm
int main(){
    int n;
    cout<<"Enter the size of n= ";
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    //Kadane's algortihm to find the maximum of subarray
    cout<<kadane(n,arr)<<endl;

  //for circular subarray 
    int wrapsum, nowrapsum;
    nowrapsum = kadane(n,arr);
    int totalsum = 0;
    for(int i=0; i<n;i++){
        totalsum += arr[i];
        arr[i]-=arr[i];
    }
    wrapsum = totalsum + kadane(n,arr);
    cout<<max(wrapsum, nowrapsum);
}
