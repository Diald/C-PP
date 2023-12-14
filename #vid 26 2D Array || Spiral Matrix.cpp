#include<iostream>
using namespace std;
int spiral_matrix(int n,int m, int arr[][]){
    int row_start=0, row_end=n-1, column_start=0, column_end=m-1;
    while(row_start<=row_end && column_start<=column_end){
        for(int col = column_start; col<=column_end ; col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        for(int row = row_start; row<=row_end ; row++){
            cout<<arr[row][column_start]<<" ";
        }
        column_end--;
        
        for(int col = column_end; col>= column_start ; col--){
            cout<<arr[row_end][col];
        }
        row_end--;
        for(int row=row_end; row>=row_start; row--){
            cout<<arr[row][column_end];
        }
        column_start++;
    }
}
int main(){
    int n, m;
    cout<<"Enter the rows of array= ";
    cin>>n;
    cout<<"Enter the columns of array= ";
    cin>>m;
    int arr[n][m];
    //input a 2D Matrix 
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    //printing a 2D Matrix
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    //to find a element in 2D Matrix
    int key;
    cout<<"Enter the key= ";
    cin>>key;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(arr[i][j] == key){
                cout<<i<<" "<<j;
            }
        }
    }
}
