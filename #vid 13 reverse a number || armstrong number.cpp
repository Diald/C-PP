#include <iostream>
using namespace std;
#include <math.h>
int reverse(int n){
    int reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    return reverse;
}
int armstrong(int n){
    int sum=0;
    int temp = n;
    while(n>=0){
        int lastnumber = n%10;
        sum += pow(lastnumber,3);
        n = n/10;
    }
    if(sum == temp){
        cout<<"Armstrong number ";
    }
    else{
        cout<<"Not Armstrong";
    }
}
int main(){
    int n;
    cout<<"Enter number to be reversed ";
    cin>>n;
    cout<<armstrong(n);
}
