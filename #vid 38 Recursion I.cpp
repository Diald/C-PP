#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevnum=sum(n-1);
    return n+prevnum;
}
// to find the power n to the power of p
int npowerp(int n, int p){
    if(p==0){
        return 1;
    }
    int powerp=npowerp(n,p-1);
    return n*powerp;
}
//to find factorial of a number
int fact(int n){
    if(n==1){
        return 1;
    }
    int prevn=fact(n-1);
    return n*prevn;
}
//to print fibbonacci sequence
int fibbs(int n){
    if (n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibbs(n-1)+fibbs(n-2);
}
int main(){
    cout<<sum(3)<<"\n";
    cout<<npowerp(2,4)<<"\n";
    cout<<fact(5)<<"\n";
    cout<<fibbs(5)<<"\n";
}