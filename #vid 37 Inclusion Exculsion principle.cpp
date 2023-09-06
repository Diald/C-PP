#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int divisible(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);

    return c1+c2-c3;
}
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main(){
    cout<<divisible(100,2,3)<<"\n";
    cout<<gcd(24,42);
}