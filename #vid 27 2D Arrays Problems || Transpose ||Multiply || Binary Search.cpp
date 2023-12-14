#include<iostream>
#include<climits>
using namespace std;
int transpose_of_matrix(int n, int m, int arr[]){
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<m ; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    return arr;
}
//matrix multiplication 
int matrix_multiplication(int a, int b, int c, int d, int arr1[], int arr2[]){
    int result[a][c];
    for(int i=0 ; i<a; i++){
        for(int j=0 ; j<c ; j++){
            for(int k=0 ; k<b ; k++){
                result[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    return result
}
//Binary Search in 2D Matrix 
int matrix_search(int n, int m, int matrix[], int target){
    int row = 0
    int col = m-1;
    bool flag = false;
    while(row<n && col>=0){
        if(matrix[row][col]==target){
            flag = true;
        }
        if(matrix[row][col]>target){
            col--;
        }
        else{
            row++;
        }
    }
    if(flag == true){
        cout<<"Element found";
    }
    else{
        cout<<'Element not found'
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
}
