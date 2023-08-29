#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the value of n= ";
    cin>>n;
    cout<<"Enter the value of m= ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the value= ";
            cin>>arr[i][j];
        }
    }
    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;
    while(row_start<=row_end){
        //left to right
        for(int col=column_start;col<column_end;col++){
            cout<<" "<<3arr[row_start][col];
        }
        row_start++;
        cout<<"\n";
        //downward direction
        for(int row=row_start;row<row_end;row++){
            cout<<" "<<arr[row][column_end];
        }
        column_end--;
        cout<<"\n";
        //right to left
        for(int col=column_end;col>=column_start;col++){
            cout<<" "<<arr[row_end][col];
        }
        row_end--;
        cout<<"\n";
        //down to top
        for(int row=row_end;row>=row_start;row++){
            cout<<" "<<arr[row][column_start];
        }
        column_start++;
        cout<<"\n";
    }
    cout<<arr;
};