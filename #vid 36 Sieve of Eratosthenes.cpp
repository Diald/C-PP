#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int eratosthenes(int n){
    int prime[100]={0};
    // to check if unmarked and mark multiples to make them mark
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    // now to print all unmarked numbers i.e prime numbers
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}
int primeFact()
int main(){
//prime factorization by Sieve of Eratosthenes method, here we start from 2 and iterate 2,3... and we keep on removing their multiples, basically we mark the multiples and keep the non-prime as unmarked
int n;
cout<<"Enter number= ";
cin>>n;
cout<<eratosthenes(n);
}
