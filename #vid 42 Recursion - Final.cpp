#include<iostream>
#include<string>
using namespace std;

// both of these can be done like fibbonaci series - 
//tiling and pairing of friends 
// tiling ways 
int tilingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingWays(n-1) + tilingWays(n-2);
}
// Pairing of Friends 
int friendsPairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
}

// 0 - 1 Knapsack Problem - very important 
// knapsack have a capacity of w and we have to fill the knapsack
// every item have some value and weight, value should 
//The knapsack problem is a combinatorial optimization problem where the goal is to select a subset of items with maximum total value, subject to a constraint on the total weight of the selected items. There are two main variations of the knapsack problem: 0/1 Knapsack and Fractional Knapsack

int Knapsack(int value[], int wt[], int n, int W){
    if(n==0 || W == 0){
        return 0;
    }
    if(wt[n-1]>W){
        return Knapsack(value,wt,n-1,W);
    }
    return max(Knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],Knapsack(value,wt,n-1,W));
}
int main(){
    int wt[] = {10,20,30};
    int value[] = {100,50,150};
    int W = 50;
    cout<<Knapsack(value, wt, 3 , W);
}
